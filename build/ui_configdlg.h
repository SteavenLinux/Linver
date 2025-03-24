/********************************************************************************
** Form generated from reading UI file 'configdlg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDLG_H
#define UI_CONFIGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigDlg
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *brandingV;
    QLabel *label;
    QComboBox *brandingcmb;
    QCheckBox *fakeDetails;
    QCheckBox *displayFullName;
    QHBoxLayout *brandingV_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *customizeBtn;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ConfigDlg)
    {
        if (ConfigDlg->objectName().isEmpty())
            ConfigDlg->setObjectName("ConfigDlg");
        ConfigDlg->setWindowModality(Qt::WindowModality::ApplicationModal);
        ConfigDlg->resize(400, 157);
        ConfigDlg->setMinimumSize(QSize(400, 157));
        ConfigDlg->setMaximumSize(QSize(400, 157));
        buttonBox = new QDialogButtonBox(ConfigDlg);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setEnabled(true);
        buttonBox->setGeometry(QRect(6, 124, 386, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        verticalLayoutWidget = new QWidget(ConfigDlg);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(4, 4, 392, 114));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        brandingV = new QHBoxLayout();
        brandingV->setSpacing(8);
        brandingV->setObjectName("brandingV");
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");

        brandingV->addWidget(label);

        brandingcmb = new QComboBox(verticalLayoutWidget);
        brandingcmb->addItem(QString());
        brandingcmb->addItem(QString());
        brandingcmb->addItem(QString());
        brandingcmb->addItem(QString());
        brandingcmb->addItem(QString());
        brandingcmb->setObjectName("brandingcmb");
        brandingcmb->setEditable(false);
        brandingcmb->setMaxCount(5);
        brandingcmb->setFrame(true);

        brandingV->addWidget(brandingcmb);

        brandingV->setStretch(0, 1);
        brandingV->setStretch(1, 1);

        verticalLayout->addLayout(brandingV);

        fakeDetails = new QCheckBox(verticalLayoutWidget);
        fakeDetails->setObjectName("fakeDetails");

        verticalLayout->addWidget(fakeDetails);

        displayFullName = new QCheckBox(verticalLayoutWidget);
        displayFullName->setObjectName("displayFullName");

        verticalLayout->addWidget(displayFullName);

        brandingV_3 = new QHBoxLayout();
        brandingV_3->setSpacing(8);
        brandingV_3->setObjectName("brandingV_3");
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        brandingV_3->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        brandingV_3->addItem(horizontalSpacer);

        customizeBtn = new QPushButton(verticalLayoutWidget);
        customizeBtn->setObjectName("customizeBtn");

        brandingV_3->addWidget(customizeBtn);

        brandingV_3->setStretch(0, 1);

        verticalLayout->addLayout(brandingV_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigDlg);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ConfigDlg, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ConfigDlg, qOverload<>(&QDialog::reject));

        brandingcmb->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigDlg);
    } // setupUi

    void retranslateUi(QDialog *ConfigDlg)
    {
        ConfigDlg->setWindowTitle(QCoreApplication::translate("ConfigDlg", "Linver configuration", nullptr));
        label->setText(QCoreApplication::translate("ConfigDlg", "Branding style to use:", nullptr));
        brandingcmb->setItemText(0, QCoreApplication::translate("ConfigDlg", "Windows Vista", nullptr));
        brandingcmb->setItemText(1, QCoreApplication::translate("ConfigDlg", "Windows 7", nullptr));
        brandingcmb->setItemText(2, QCoreApplication::translate("ConfigDlg", "Windows 8", nullptr));
        brandingcmb->setItemText(3, QCoreApplication::translate("ConfigDlg", "Windows 8.1", nullptr));
        brandingcmb->setItemText(4, QCoreApplication::translate("ConfigDlg", "Custom", nullptr));

        fakeDetails->setText(QCoreApplication::translate("ConfigDlg", "Display fake version instead of OS version", nullptr));
        displayFullName->setText(QCoreApplication::translate("ConfigDlg", "Display full name", nullptr));
        label_3->setText(QCoreApplication::translate("ConfigDlg", "To customize texts, branding image and other options, click customize.", nullptr));
        customizeBtn->setText(QCoreApplication::translate("ConfigDlg", "Customize...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfigDlg: public Ui_ConfigDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDLG_H
