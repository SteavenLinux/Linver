/********************************************************************************
** Form generated from reading UI file 'customizedlg.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMIZEDLG_H
#define UI_CUSTOMIZEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomizeDlg
{
public:
    QTabWidget *tabWidget;
    QWidget *window;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *widthBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *heightBox;
    QGroupBox *groupBox_2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *iconField;
    QPushButton *fileBtn;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *titleField;
    QSpacerItem *verticalSpacer;
    QWidget *branding;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *brandingField;
    QPushButton *fileBtn2;
    QGroupBox *brdDetails;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *productField;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *copyrightField;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_9;
    QLineEdit *osField;
    QSpacerItem *verticalSpacer_4;
    QWidget *details;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_14;
    QLineEdit *versionField;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_13;
    QLineEdit *licenseField1;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_15;
    QLineEdit *memoryField;
    QSpacerItem *verticalSpacer_2;
    QWidget *tweaks;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_10;
    QCheckBox *brandingSepCheckBox;
    QCheckBox *osCheckBox;
    QCheckBox *memoryCheckBox;
    QGroupBox *groupBox_5;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_5;
    QSpinBox *spacerLeftWidth;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_16;
    QSpinBox *spacerRightWidth;
    QSpacerItem *verticalSpacer_3;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *dialogBtns;
    QSpacerItem *horizontalSpacer;
    QPushButton *okBtn;
    QPushButton *applyBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *CustomizeDlg)
    {
        if (CustomizeDlg->objectName().isEmpty())
            CustomizeDlg->setObjectName("CustomizeDlg");
        CustomizeDlg->setWindowModality(Qt::WindowModality::ApplicationModal);
        CustomizeDlg->resize(400, 300);
        CustomizeDlg->setMinimumSize(QSize(400, 300));
        CustomizeDlg->setMaximumSize(QSize(400, 300));
        CustomizeDlg->setSizeGripEnabled(false);
        CustomizeDlg->setModal(false);
        tabWidget = new QTabWidget(CustomizeDlg);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(6, 6, 388, 256));
        window = new QWidget();
        window->setObjectName("window");
        verticalLayoutWidget = new QWidget(window);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 378, 222));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        groupBox = new QGroupBox(verticalLayoutWidget);
        groupBox->setObjectName("groupBox");
        groupBox->setMinimumSize(QSize(0, 80));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        verticalLayoutWidget_4 = new QWidget(groupBox);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(6, 14, 358, 58));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(2, 2, 2, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(verticalLayoutWidget_4);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        widthBox = new QSpinBox(verticalLayoutWidget_4);
        widthBox->setObjectName("widthBox");
        widthBox->setMinimum(413);
        widthBox->setMaximum(500);
        widthBox->setSingleStep(5);

        horizontalLayout->addWidget(widthBox);

        horizontalLayout->setStretch(0, 1);

        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(verticalLayoutWidget_4);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        heightBox = new QSpinBox(verticalLayoutWidget_4);
        heightBox->setObjectName("heightBox");
        heightBox->setMinimum(321);
        heightBox->setMaximum(500);
        heightBox->setSingleStep(5);

        horizontalLayout_2->addWidget(heightBox);

        horizontalLayout_2->setStretch(0, 1);

        verticalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(verticalLayoutWidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setMinimumSize(QSize(0, 79));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        verticalLayoutWidget_5 = new QWidget(groupBox_2);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(6, 14, 358, 60));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_7->setSpacing(2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(verticalLayoutWidget_5);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        iconField = new QLineEdit(verticalLayoutWidget_5);
        iconField->setObjectName("iconField");

        horizontalLayout_5->addWidget(iconField);

        fileBtn = new QPushButton(verticalLayoutWidget_5);
        fileBtn->setObjectName("fileBtn");
        fileBtn->setMinimumSize(QSize(22, 0));
        fileBtn->setMaximumSize(QSize(22, 16777215));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentOpen));
        fileBtn->setIcon(icon);
        fileBtn->setAutoDefault(false);

        horizontalLayout_5->addWidget(fileBtn);


        horizontalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_7->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(verticalLayoutWidget_5);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        titleField = new QLineEdit(verticalLayoutWidget_5);
        titleField->setObjectName("titleField");

        horizontalLayout_4->addWidget(titleField);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(window, QString());
        branding = new QWidget();
        branding->setObjectName("branding");
        verticalLayoutWidget_6 = new QWidget(branding);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(0, 0, 378, 222));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(verticalLayoutWidget_6);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        brandingField = new QLineEdit(verticalLayoutWidget_6);
        brandingField->setObjectName("brandingField");

        horizontalLayout_7->addWidget(brandingField);

        fileBtn2 = new QPushButton(verticalLayoutWidget_6);
        fileBtn2->setObjectName("fileBtn2");
        fileBtn2->setMinimumSize(QSize(22, 0));
        fileBtn2->setMaximumSize(QSize(22, 16777215));
        fileBtn2->setIcon(icon);
        fileBtn2->setAutoDefault(false);

        horizontalLayout_7->addWidget(fileBtn2);


        horizontalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);

        verticalLayout_8->addLayout(horizontalLayout_6);

        brdDetails = new QGroupBox(verticalLayoutWidget_6);
        brdDetails->setObjectName("brdDetails");
        brdDetails->setMinimumSize(QSize(0, 115));
        brdDetails->setFlat(false);
        brdDetails->setCheckable(false);
        brdDetails->setChecked(false);
        verticalLayoutWidget_7 = new QWidget(brdDetails);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(6, 14, 359, 94));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(verticalLayoutWidget_7);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        productField = new QLineEdit(verticalLayoutWidget_7);
        productField->setObjectName("productField");

        horizontalLayout_8->addWidget(productField);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_8 = new QLabel(verticalLayoutWidget_7);
        label_8->setObjectName("label_8");

        horizontalLayout_9->addWidget(label_8);

        copyrightField = new QLineEdit(verticalLayoutWidget_7);
        copyrightField->setObjectName("copyrightField");

        horizontalLayout_9->addWidget(copyrightField);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_9 = new QLabel(verticalLayoutWidget_7);
        label_9->setObjectName("label_9");

        horizontalLayout_10->addWidget(label_9);

        osField = new QLineEdit(verticalLayoutWidget_7);
        osField->setObjectName("osField");

        horizontalLayout_10->addWidget(osField);

        horizontalLayout_10->setStretch(0, 1);
        horizontalLayout_10->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalLayout_10);


        verticalLayout_8->addWidget(brdDetails);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        tabWidget->addTab(branding, QString());
        details = new QWidget();
        details->setObjectName("details");
        verticalLayoutWidget_2 = new QWidget(details);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 378, 222));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setSpacing(2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName("label_14");

        horizontalLayout_15->addWidget(label_14);

        versionField = new QLineEdit(verticalLayoutWidget_2);
        versionField->setObjectName("versionField");

        horizontalLayout_15->addWidget(versionField);

        horizontalLayout_15->setStretch(0, 1);
        horizontalLayout_15->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName("label_13");

        horizontalLayout_14->addWidget(label_13);

        licenseField1 = new QLineEdit(verticalLayoutWidget_2);
        licenseField1->setObjectName("licenseField1");

        horizontalLayout_14->addWidget(licenseField1);

        horizontalLayout_14->setStretch(0, 1);
        horizontalLayout_14->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName("label_15");

        horizontalLayout_16->addWidget(label_15);

        memoryField = new QLineEdit(verticalLayoutWidget_2);
        memoryField->setObjectName("memoryField");

        horizontalLayout_16->addWidget(memoryField);

        horizontalLayout_16->setStretch(0, 1);
        horizontalLayout_16->setStretch(1, 1);

        verticalLayout_4->addLayout(horizontalLayout_16);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabWidget->addTab(details, QString());
        tweaks = new QWidget();
        tweaks->setObjectName("tweaks");
        verticalLayoutWidget_3 = new QWidget(tweaks);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(0, 0, 378, 222));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(4, 4, 4, 4);
        groupBox_4 = new QGroupBox(verticalLayoutWidget_3);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setMinimumSize(QSize(0, 87));
        groupBox_4->setFlat(false);
        groupBox_4->setCheckable(false);
        verticalLayoutWidget_8 = new QWidget(groupBox_4);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(6, 12, 359, 68));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_10->setSpacing(2);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(2, 2, 2, 2);
        brandingSepCheckBox = new QCheckBox(verticalLayoutWidget_8);
        brandingSepCheckBox->setObjectName("brandingSepCheckBox");

        verticalLayout_10->addWidget(brandingSepCheckBox);

        osCheckBox = new QCheckBox(verticalLayoutWidget_8);
        osCheckBox->setObjectName("osCheckBox");

        verticalLayout_10->addWidget(osCheckBox);

        memoryCheckBox = new QCheckBox(verticalLayoutWidget_8);
        memoryCheckBox->setObjectName("memoryCheckBox");

        verticalLayout_10->addWidget(memoryCheckBox);


        verticalLayout_5->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(verticalLayoutWidget_3);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setMinimumSize(QSize(0, 77));
        groupBox_5->setFlat(false);
        groupBox_5->setCheckable(false);
        verticalLayoutWidget_9 = new QWidget(groupBox_5);
        verticalLayoutWidget_9->setObjectName("verticalLayoutWidget_9");
        verticalLayoutWidget_9->setGeometry(QRect(6, 12, 359, 58));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_11->setSpacing(2);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_5 = new QLabel(verticalLayoutWidget_9);
        label_5->setObjectName("label_5");

        horizontalLayout_17->addWidget(label_5);

        spacerLeftWidth = new QSpinBox(verticalLayoutWidget_9);
        spacerLeftWidth->setObjectName("spacerLeftWidth");
        spacerLeftWidth->setMinimum(0);
        spacerLeftWidth->setMaximum(64);
        spacerLeftWidth->setSingleStep(8);

        horizontalLayout_17->addWidget(spacerLeftWidth);

        horizontalLayout_17->setStretch(0, 1);

        verticalLayout_11->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_16 = new QLabel(verticalLayoutWidget_9);
        label_16->setObjectName("label_16");

        horizontalLayout_18->addWidget(label_16);

        spacerRightWidth = new QSpinBox(verticalLayoutWidget_9);
        spacerRightWidth->setObjectName("spacerRightWidth");
        spacerRightWidth->setMinimum(0);
        spacerRightWidth->setMaximum(64);
        spacerRightWidth->setSingleStep(8);

        horizontalLayout_18->addWidget(spacerRightWidth);

        horizontalLayout_18->setStretch(0, 1);

        verticalLayout_11->addLayout(horizontalLayout_18);


        verticalLayout_5->addWidget(groupBox_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tabWidget->addTab(tweaks, QString());
        horizontalLayoutWidget_4 = new QWidget(CustomizeDlg);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(6, 268, 388, 26));
        dialogBtns = new QHBoxLayout(horizontalLayoutWidget_4);
        dialogBtns->setObjectName("dialogBtns");
        dialogBtns->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        dialogBtns->addItem(horizontalSpacer);

        okBtn = new QPushButton(horizontalLayoutWidget_4);
        okBtn->setObjectName("okBtn");

        dialogBtns->addWidget(okBtn);

        applyBtn = new QPushButton(horizontalLayoutWidget_4);
        applyBtn->setObjectName("applyBtn");
        applyBtn->setAutoDefault(false);

        dialogBtns->addWidget(applyBtn);

        cancelBtn = new QPushButton(horizontalLayoutWidget_4);
        cancelBtn->setObjectName("cancelBtn");
        cancelBtn->setAutoDefault(false);

        dialogBtns->addWidget(cancelBtn);


        retranslateUi(CustomizeDlg);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CustomizeDlg);
    } // setupUi

    void retranslateUi(QDialog *CustomizeDlg)
    {
        CustomizeDlg->setWindowTitle(QCoreApplication::translate("CustomizeDlg", "Customize Linver", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CustomizeDlg", "Size", nullptr));
        label->setText(QCoreApplication::translate("CustomizeDlg", "Width:", nullptr));
        widthBox->setSuffix(QString());
        label_2->setText(QCoreApplication::translate("CustomizeDlg", "Height:", nullptr));
        heightBox->setSuffix(QString());
        groupBox_2->setTitle(QCoreApplication::translate("CustomizeDlg", "Caption", nullptr));
        label_3->setText(QCoreApplication::translate("CustomizeDlg", "Icon path:", nullptr));
        fileBtn->setText(QString());
        label_4->setText(QCoreApplication::translate("CustomizeDlg", "Title:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(window), QCoreApplication::translate("CustomizeDlg", "Window", nullptr));
        label_6->setText(QCoreApplication::translate("CustomizeDlg", "Branding image path:", nullptr));
        fileBtn2->setText(QString());
        brdDetails->setTitle(QCoreApplication::translate("CustomizeDlg", "Details", nullptr));
        label_7->setText(QCoreApplication::translate("CustomizeDlg", "Product name:", nullptr));
        label_8->setText(QCoreApplication::translate("CustomizeDlg", "Copyright:", nullptr));
        label_9->setText(QCoreApplication::translate("CustomizeDlg", "OS name:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(branding), QCoreApplication::translate("CustomizeDlg", "Branding", nullptr));
        label_14->setText(QCoreApplication::translate("CustomizeDlg", "Version:", nullptr));
        label_13->setText(QCoreApplication::translate("CustomizeDlg", "License (RichText):", nullptr));
        label_15->setText(QCoreApplication::translate("CustomizeDlg", "Memory available text:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(details), QCoreApplication::translate("CustomizeDlg", "Details", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("CustomizeDlg", "Misc", nullptr));
        brandingSepCheckBox->setText(QCoreApplication::translate("CustomizeDlg", "Show branding separator", nullptr));
        osCheckBox->setText(QCoreApplication::translate("CustomizeDlg", "Show operating system text", nullptr));
        memoryCheckBox->setText(QCoreApplication::translate("CustomizeDlg", "Show memory available", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("CustomizeDlg", "Details spacers", nullptr));
        label_5->setText(QCoreApplication::translate("CustomizeDlg", "Left:", nullptr));
        spacerLeftWidth->setSuffix(QString());
        label_16->setText(QCoreApplication::translate("CustomizeDlg", "Right:", nullptr));
        spacerRightWidth->setSuffix(QString());
        tabWidget->setTabText(tabWidget->indexOf(tweaks), QCoreApplication::translate("CustomizeDlg", "Tweaks", nullptr));
        okBtn->setText(QCoreApplication::translate("CustomizeDlg", "OK", nullptr));
        applyBtn->setText(QCoreApplication::translate("CustomizeDlg", "Apply", nullptr));
        cancelBtn->setText(QCoreApplication::translate("CustomizeDlg", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomizeDlg: public Ui_CustomizeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMIZEDLG_H
