#ifndef CONFIGDLG_H
#define CONFIGDLG_H

#include <QDialog>
#include <QSettings>

#include "about.h"
#include "customizedlg.h"

namespace Ui { class ConfigDlg; }

class CustomizeDlg;

class ConfigDlg : public QDialog
{
    Q_OBJECT

public:
    void refreshSettings(bool firstCreation = true);
    explicit ConfigDlg(QWidget *parent = nullptr);
    ~ConfigDlg();

private slots:
    void on_brandingcmb_currentIndexChanged(int index);

    void on_customizeBtn_clicked();
    void on_buttonBox_accepted();

private:
    Ui::ConfigDlg *ui;
    CustomizeDlg *customizedlg;

    QSettings settings;
};

#endif // CONFIGDLG_H
