#ifndef ABOUT_H
#define ABOUT_H

#include <QSettings>
#include <QMainWindow>
#include <QProcess>
#include <QTextStream>
#include <QSettings>
#include <QIcon>

#include "configdlg.h"

QT_BEGIN_NAMESPACE
namespace Ui { class About; }
QT_END_NAMESPACE

class ConfigDlg;

struct BrandingInfo
{
    QString windowTitle = "About Windows";
    int windowWidth = 458;
    int windowHeight = 374;
    QString iconPath;
    QString brandingPath;
    bool brandingSeparator = true;
    QString osName;
    QString version;
    QString copyright;
    QString winverName;
    bool showLongText = true;
    QString license;
    bool showMemory = true;
    QString memoryTxt = "undefined";

    int spacerRightWidth = 64;
    int spacerLeftWidth = 64;
};

class About : public QMainWindow
{
    Q_OBJECT

public:
    void loadSettings();
    void updateBranding();
    QString getFullName();
    void refresh();
    About(QWidget *parent = nullptr);
    void changeCfg(QString setting = "fakeBranding", QVariant state = false);
    ~About();
    enum winVersion
    {
        WIN_VISTA,
        WIN_7,
        WIN_8_9200,
        WIN_8_9600,
        CUSTOM,
    };

private slots:
    void finished();
    void readOutput();
    void on_pushButton_clicked();    
    void on_branding_clicked();

private:
    void initializeBrandingInfo();
    Ui::About *ui;
    ConfigDlg *configdlg;

    QProcess *proc;
    QString commandOutput;
    bool isUISetup = false;

    QIcon wndIcon;
    QString kernel_version, arch, osname, copyright, license, memoryTxt;
    QString longText;

    QSettings settings;
    bool fakeBranding;
    bool displayFullName;
    winVersion currentWinver;
    QString winverName;
    BrandingInfo brandingInfo[5];
};

inline void About::initializeBrandingInfo()
{
    // Vista
    brandingInfo[WIN_VISTA].windowWidth = 413;
    brandingInfo[WIN_VISTA].windowHeight = 387;
    brandingInfo[WIN_VISTA].iconPath = "";
    brandingInfo[WIN_VISTA].brandingPath = ":/vistaUltimate";
    brandingInfo[WIN_VISTA].brandingSeparator = false;
    brandingInfo[WIN_VISTA].osName = "Microsoft® Windows®";
    brandingInfo[WIN_VISTA].version = "Version 6.0 (Build 6003: Service Pack 2)";
    brandingInfo[WIN_VISTA].copyright = "Copyright © 2006 Microsoft Corporation.  All rights reserved.";
    brandingInfo[WIN_VISTA].winverName = "Windows Vista™ Ultimate";
    brandingInfo[WIN_VISTA].showMemory = true;
    brandingInfo[WIN_VISTA].memoryTxt = "Physical memory available to Windows®";
    brandingInfo[WIN_VISTA].license = "This product is licensed under the <a style=\"color: #0066cc;\" href=\"https://support.microsoft.com/en-us/windows/microsoft-software-license-terms-e26eedad-97a2-5250-2670-aad156b654bd\">Microsoft Software<br>License Terms</a> to:";

    brandingInfo[WIN_VISTA].spacerRightWidth = 10;

    // Win7
    brandingInfo[WIN_7].windowWidth = 458;
    brandingInfo[WIN_7].windowHeight = 374;
    brandingInfo[WIN_7].iconPath = ":/7Ico";
    brandingInfo[WIN_7].brandingPath = ":/7Ultimate";
    brandingInfo[WIN_7].brandingSeparator = true;
    brandingInfo[WIN_7].osName = "Microsoft Windows®";
    brandingInfo[WIN_7].version = "Version 6.1 (Build 7601: Service Pack 1)";
    brandingInfo[WIN_7].copyright = "Copyright © 2009 Microsoft Corporation.  All rights reserved.";
    brandingInfo[WIN_7].winverName = "SteavenLinux";
    brandingInfo[WIN_7].showMemory = false;
    brandingInfo[WIN_7].license = brandingInfo[WIN_VISTA].license;

    // Win8
    brandingInfo[WIN_8_9200].windowWidth = 458;
    brandingInfo[WIN_8_9200].windowHeight = 374;
    brandingInfo[WIN_8_9200].iconPath = "";
    brandingInfo[WIN_8_9200].brandingPath = ":/8";
    brandingInfo[WIN_8_9200].brandingSeparator = true;
    brandingInfo[WIN_8_9200].osName = "Microsoft Windows®";
    brandingInfo[WIN_8_9200].version = "Version 6.2 (Build 9200)";
    brandingInfo[WIN_8_9200].copyright = "© 2012 Microsoft Corporation.  All rights reserved.";
    brandingInfo[WIN_8_9200].winverName = "Windows 8 Pro";
    brandingInfo[WIN_8_9200].showMemory = false;
    brandingInfo[WIN_8_9200].license = brandingInfo[WIN_VISTA].license;

    // Win8.1
    brandingInfo[WIN_8_9600].windowWidth = 458;
    brandingInfo[WIN_8_9600].windowHeight = 374;
    brandingInfo[WIN_8_9600].iconPath = "";
    brandingInfo[WIN_8_9600].brandingPath = ":/8";
    brandingInfo[WIN_8_9600].brandingSeparator = true;
    brandingInfo[WIN_8_9600].osName = "Microsoft Windows®";
    brandingInfo[WIN_8_9600].version = "Version 6.3 (Build 9600)";
    brandingInfo[WIN_8_9600].copyright = "© 2013 Microsoft Corporation.  All rights reserved.";
    brandingInfo[WIN_8_9600].winverName = "Windows 8.1 Pro";
    brandingInfo[WIN_8_9600].showMemory = false;
    brandingInfo[WIN_8_9600].license = brandingInfo[WIN_VISTA].license;

    // Custom
    brandingInfo[CUSTOM].windowTitle = settings.value("windowTitle", "undefined").toString();
    brandingInfo[CUSTOM].windowWidth = settings.value("windowWidth", 458).toInt();
    brandingInfo[CUSTOM].windowHeight = settings.value("windowHeight", 374).toInt();
    brandingInfo[CUSTOM].iconPath = settings.value("iconPath", "undefined").toString();
    brandingInfo[CUSTOM].brandingPath = settings.value("brandingPath", "undefined").toString();
    brandingInfo[CUSTOM].brandingSeparator = settings.value("showBrdSeparator", true).toBool();
    brandingInfo[CUSTOM].osName = settings.value("osName", "undefined").toString();
    brandingInfo[CUSTOM].version = settings.value("version", "undefined").toString();
    brandingInfo[CUSTOM].copyright = settings.value("copyright", "undefined").toString();
    brandingInfo[CUSTOM].winverName = settings.value("winverName", "undefined").toString();
    brandingInfo[CUSTOM].showLongText = settings.value("showLongText", true).toBool();
    brandingInfo[CUSTOM].showMemory = settings.value("showMemory", true).toBool();
    brandingInfo[CUSTOM].memoryTxt = settings.value("memoryTxt", "undefined").toString();
    brandingInfo[CUSTOM].license = settings.value("license", "undefined").toString();

    brandingInfo[CUSTOM].spacerLeftWidth = settings.value("spacerLeftWidth", 64).toInt();
    brandingInfo[CUSTOM].spacerRightWidth = settings.value("spacerRightWidth", 64).toInt();
}
#endif // ABOUT_H
