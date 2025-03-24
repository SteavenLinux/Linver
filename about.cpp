#include "about.h"
#include "ui_about.h"

#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <sys/sysinfo.h>

#include <sys/types.h> // for GECOS information
#include <pwd.h>

void About::loadSettings()
{
    fakeBranding = settings.value("fakeBranding", false).toBool();
    displayFullName = settings.value("displayFullName", false).toBool();

    int currentWinverInt = settings.value("currentWinver", WIN_7).toInt();
    // Sanity check to ensure we aren't getting weird values
    if(currentWinverInt < (int)WIN_VISTA) currentWinverInt = (int)WIN_VISTA;
    else if(currentWinverInt > (int)CUSTOM) currentWinverInt = (int)CUSTOM;
    currentWinver = (winVersion)currentWinverInt; // This can simply be casted
}
void About::updateBranding()
{
    auto brd = brandingInfo[currentWinver];
    this->setFixedWidth(brd.windowWidth);
    this->setFixedHeight(brd.windowHeight);

    wndIcon = QIcon(brd.iconPath);

    ui->branding->setPixmap(QPixmap(brd.brandingPath));

    ui->hSpacerL->setFixedWidth(brd.spacerLeftWidth);
    ui->hSpacerR->setFixedWidth(brd.spacerRightWidth);

    ui->longdesc->setVisible(brd.showLongText);

    if(brd.brandingSeparator)
    {
        ui->curseofra->setFixedHeight(20);
        ui->verticalLayout->setContentsMargins(0, 5, 0, 0);
        ui->brandingSeparator->setVisible(true);
    }
    else
    {
        ui->curseofra->setFixedHeight(10);
        ui->verticalLayout->setContentsMargins(0, 0, 0, 0);
        ui->brandingSeparator->setVisible(false);
    }

    if(fakeBranding)
    {
        ui->os->setText(brd.osName);
        ui->version->setText(brd.version);
        ui->copyright->setText(brd.copyright);
        license = brd.license;
    }

    ui->memorySeparator->setVisible(brd.showMemory);
    ui->memoryLbl->setVisible(brd.showMemory);

    QString distro;
    if(!fakeBranding)
    {
        proc = new QProcess(this);
        proc->setReadChannel(QProcess::StandardOutput);
        proc->setProcessChannelMode(QProcess::MergedChannels);
        connect (proc, SIGNAL(readyReadStandardOutput()), this, SLOT(readOutput()));
        connect (proc, SIGNAL(finished(int , QProcess::ExitStatus)), this, SLOT(finished()));
        commandOutput = "";
        proc->start("uname", QStringList() << "-rmo");

        if(proc->waitForFinished())
        {
            QStringList out = commandOutput.split(" ");
            kernel_version = out[0];
            arch = out[1] + ",";
            osname = out[2].left(out[2].length()-1);
            copyright = "";

            ui->version->setText("Version "+ kernel_version +" ("+ arch + " " + osname + ")");
            ui->copyright->setText("Linux is a Registered Trademark of Linus Torvalds. All trademarks are property of their respective owners.");
        }
        commandOutput = "";
        proc->start("lsb_release", QStringList() << "-ds");

        if(proc->waitForFinished())
        {
            distro = commandOutput.mid(1, commandOutput.length()-3);
            ui->os->setText(distro);
        }
    }

    if(currentWinver == CUSTOM && !fakeBranding) winverName = distro;
    else winverName = brd.winverName;
    ui->longdesc->setText("<p style=\"line-height:85%\">The " + winverName + " operating system and its user interface are protected by trademark and other pending or existing intellectual property rights in the Egypt and other countries.</p>");

    struct sysinfo info;
    sysinfo(&info);

    long mem = info.totalram / 1000;
    char formattedMem[1024];
    setlocale(LC_NUMERIC, "");
    snprintf(formattedMem, 1024, "%'ld\n", mem);

    QString totalMemory(formattedMem);

    if(fakeBranding)
    {
        this->setWindowTitle(brd.windowTitle);
        ui->memoryLbl->setText(brd.memoryTxt + ": " + totalMemory + " KB");
    }
    else
    {
        ui->memoryLbl->setText("Physical memory available to " + distro + ": " + totalMemory + " KB");
        license = "This product is licensed under the <a style=\"color: #0066cc;\" href=\"https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html\">GNU General<br>Public License v2</a> to:";
        this->setWindowTitle("About Linux");
    }

    ui->license->setText(license);
    ui->user->setText(getFullName());

    this->setWindowIcon(wndIcon);
}

QString About::getFullName()
{
    if(!displayFullName) return QString(getlogin());
    auto p = getpwnam(getlogin());
    if(!p) return QString(getlogin());
    QString fullname;
    QString user_information(p->pw_gecos);
    QStringList user_info_list = user_information.split(',');
    if(user_info_list.isEmpty()) return QString(getlogin());
    fullname = user_info_list[0]; // First entry should be the full user name
    return fullname;
}
void About::refresh()
{
    initializeBrandingInfo();
    loadSettings();
    updateBranding();
}
About::About(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::About)
{
    ui->setupUi(this);
    isUISetup = true;
    fakeBranding = settings.value("fakeBranding", false).toBool();

    refresh();

    ui->pushButton->setFocus(Qt::OtherFocusReason);
}
void About::changeCfg(QString setting, QVariant state)
{
    settings.setValue(setting, state);

    loadSettings();
    updateBranding();
}

void About::finished()
{
    proc->close();
}
void About::readOutput()
{
    QTextStream *str = new QTextStream(proc->readAllStandardOutput());
    while(!str->atEnd())
    {
        QString l = str->readAll();
        if(l.isNull()) break;
        else commandOutput.append(l);
    }
}

void About::on_pushButton_clicked()
{
    this->close();
}
void About::on_branding_clicked()
{
    configdlg = new ConfigDlg(this);
    configdlg->show();
}

About::~About()
{
    delete proc;
    delete ui;
}
