#include "customizedlg.h"
#include "ui_customizedlg.h"

#include <QFileDialog>

void CustomizeDlg::loadSettings()
{
    // Window
    ui->widthBox->setValue(settings.value("windowWidth", 413).toInt());
    ui->heightBox->setValue(settings.value("windowHeight", 321).toInt());

    ui->iconField->setText(settings.value("iconPath", "").toString());
    ui->titleField->setText(settings.value("windowTitle", "undefined").toString());

    // Branding
    ui->brandingField->setText(settings.value("brandingPath", "").toString());

    ui->productField->setText(settings.value("osName", "undefined").toString());
    ui->copyrightField->setText(settings.value("copyright", "undefined").toString());
    ui->osField->setText(settings.value("winverName", "undefined").toString());

    // Details
    ui->versionField->setText(settings.value("version", "undefined").toString());
    ui->licenseField1->setText(settings.value("license", "undefined").toString());
    ui->memoryField->setText(settings.value("memoryTxt", "undefined").toString());

    // Tweaks
    ui->brandingSepCheckBox->setChecked(settings.value("showBrdSeparator", true).toBool());
    ui->osCheckBox->setChecked(settings.value("showLongText", true).toBool());
    ui->memoryCheckBox->setChecked(settings.value("showMemory", true).toBool());
    ui->spacerLeftWidth->setValue(settings.value("spacerLeftWidth", 64).toInt());
    ui->spacerRightWidth->setValue(settings.value("spacerRightWidth", 64).toInt());

    ui->memoryField->setEnabled(settings.value("showMemory", true).toBool());
    ui->brdDetails->setEnabled(settings.value("fakeBranding", false).toBool());
    ui->details->setEnabled(settings.value("fakeBranding", false).toBool());
    ui->titleField->setEnabled(settings.value("fakeBranding", false).toBool());
}
void CustomizeDlg::saveSettings()
{
    // Window
    settings.setValue("windowWidth", ui->widthBox->value());
    settings.setValue("windowHeight", ui->heightBox->value());

    settings.setValue("iconPath", ui->iconField->text());
    settings.setValue("windowTitle", ui->titleField->text());

    // Branding
    settings.setValue("brandingPath", ui->brandingField->text());

    settings.setValue("osName", ui->productField->text());
    settings.setValue("copyright", ui->copyrightField->text());
    settings.setValue("winverName", ui->osField->text());

    // Details
    settings.setValue("version", ui->versionField->text());
    settings.setValue("license", ui->licenseField1->text());
    settings.setValue("memoryTxt", ui->memoryField->text());

    // Tweaks
    settings.setValue("showBrdSeparator", ui->brandingSepCheckBox->isChecked());
    settings.setValue("showLongText", ui->osCheckBox->isChecked());
    settings.setValue("showMemory", ui->memoryCheckBox->isChecked());
    settings.setValue("spacerLeftWidth", ui->spacerLeftWidth->value());
    settings.setValue("spacerRightWidth", ui->spacerRightWidth->value());

    ui->memoryField->setEnabled(settings.value("showMemory", true).toBool());

    abtdialog->refresh();
}

CustomizeDlg::CustomizeDlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CustomizeDlg)
{
    ui->setupUi(this);

    loadSettings();
}

// Window
void CustomizeDlg::setIconPath(QString file)
{
    ui->iconField->setText(file);
}
void CustomizeDlg::on_fileBtn_clicked()
{
    QFileDialog* filedialog = new QFileDialog(this);
    connect (filedialog, SIGNAL(fileSelected(QString)), this, SLOT(setIconPath(QString)));
    filedialog->setFileMode(QFileDialog::ExistingFile);
    filedialog->setNameFilter("Image or ICO file (*.png *.jpg *.bmp *.ico)");

    filedialog->show();
}

// Branding
void CustomizeDlg::setBrandingPath(QString file)
{
    ui->brandingField->setText(file);
}
void CustomizeDlg::on_fileBtn2_clicked()
{
    QFileDialog* filedialog = new QFileDialog(this);
    connect (filedialog, SIGNAL(fileSelected(QString)), this, SLOT(setBrandingPath(QString)));
    filedialog->setFileMode(QFileDialog::ExistingFile);
    filedialog->setNameFilter("Image file (*.png *.jpg *.bmp)");

    filedialog->show();
}

void CustomizeDlg::on_okBtn_clicked()
{
    saveSettings();
    this->destroy();
}
void CustomizeDlg::on_applyBtn_clicked()
{
    saveSettings();
}
void CustomizeDlg::on_cancelBtn_clicked()
{
    this->destroy();
}

CustomizeDlg::~CustomizeDlg()
{
    delete ui;
}
