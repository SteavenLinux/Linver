#include "configdlg.h"
#include "ui_configdlg.h"

void ConfigDlg::refreshSettings(bool firstCreation)
{
    if(firstCreation)
    {
        ui->brandingcmb->setCurrentIndex(settings.value("currentWinver", About::WIN_7).toInt());
        ui->fakeDetails->setChecked(settings.value("fakeBranding", false).toBool());
        ui->displayFullName->setChecked(settings.value("displayFullName", false).toBool());
    }

    ui->customizeBtn->setEnabled(ui->brandingcmb->currentIndex() == About::CUSTOM);
}

ConfigDlg::ConfigDlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ConfigDlg)
{
    ui->setupUi(this);

    refreshSettings(true);
}

void ConfigDlg::on_brandingcmb_currentIndexChanged(int index)
{
    Q_UNUSED(index);
    refreshSettings(false);
}

void ConfigDlg::on_customizeBtn_clicked()
{
    customizedlg = new CustomizeDlg(this);
    customizedlg->abtdialog = (About*)parent();
    customizedlg->show();
}
void ConfigDlg::on_buttonBox_accepted()
{
    About* abt = (About*)parent();
    abt->changeCfg("currentWinver", ui->brandingcmb->currentIndex());
    abt->changeCfg("fakeBranding", ui->fakeDetails->isChecked());
    abt->changeCfg("displayFullName", ui->displayFullName->isChecked());
    abt->refresh();
}

ConfigDlg::~ConfigDlg()
{
    this->destroy();
    delete ui;
}
