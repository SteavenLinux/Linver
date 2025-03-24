#ifndef CUSTOMIZEDLG_H
#define CUSTOMIZEDLG_H

#include <QDialog>
#include <QSettings>

#include "about.h"

namespace Ui { class CustomizeDlg; }

class About;

class CustomizeDlg : public QDialog
{
    Q_OBJECT

public:
    About* abtdialog;

    void loadSettings();
    void saveSettings();
    explicit CustomizeDlg(QWidget *parent = nullptr);
    ~CustomizeDlg();

private slots:
    // Window
    void setIconPath(QString file);
    void on_fileBtn_clicked();

    // Branding
    void setBrandingPath(QString file);
    void on_fileBtn2_clicked();

    void on_okBtn_clicked();
    void on_applyBtn_clicked();
    void on_cancelBtn_clicked();

private:
    Ui::CustomizeDlg *ui;

    QSettings settings;
};

#endif // CUSTOMIZEDLG_H
