/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickableqlabel.h"

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    ClickableQLabel *branding;
    QHBoxLayout *separator;
    QSpacerItem *horizontalSpacer_3;
    QFrame *brandingSeparator;
    QLabel *curseofra;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *details;
    QLabel *hSpacerL;
    QVBoxLayout *verticalLayout;
    QLabel *os;
    QLabel *version;
    QLabel *copyright;
    QLabel *longdesc;
    QSpacerItem *verticalSpacer;
    QLabel *license;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *user;
    QSpacerItem *verticalSpacer_4;
    QFrame *memorySeparator;
    QLabel *memoryLbl;
    QLabel *hSpacerR;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *controls;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *spacer;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QMainWindow *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName("About");
        About->resize(413, 387);
        About->setMinimumSize(QSize(413, 387));
        About->setMaximumSize(QSize(421, 387));
        centralwidget = new QWidget(About);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        branding = new ClickableQLabel(centralwidget);
        branding->setObjectName("branding");
        branding->setPixmap(QPixmap(QString::fromUtf8(":/vistaUltimate")));
        branding->setScaledContents(false);
        branding->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);
        branding->setWordWrap(true);
        branding->setMargin(0);
        branding->setIndent(0);

        verticalLayout_3->addWidget(branding);

        separator = new QHBoxLayout();
        separator->setSpacing(0);
        separator->setObjectName("separator");
        horizontalSpacer_3 = new QSpacerItem(15, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        separator->addItem(horizontalSpacer_3);

        brandingSeparator = new QFrame(centralwidget);
        brandingSeparator->setObjectName("brandingSeparator");
        brandingSeparator->setMinimumSize(QSize(0, 2));
        brandingSeparator->setMaximumSize(QSize(16777215, 2));
        brandingSeparator->setFrameShape(QFrame::Shape::Panel);
        brandingSeparator->setFrameShadow(QFrame::Shadow::Sunken);

        separator->addWidget(brandingSeparator);

        curseofra = new QLabel(centralwidget);
        curseofra->setObjectName("curseofra");
        curseofra->setMinimumSize(QSize(0, 20));

        separator->addWidget(curseofra);

        horizontalSpacer_4 = new QSpacerItem(15, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        separator->addItem(horizontalSpacer_4);

        separator->setStretch(1, 1);

        verticalLayout_3->addLayout(separator);

        details = new QHBoxLayout();
        details->setSpacing(0);
        details->setObjectName("details");
        hSpacerL = new QLabel(centralwidget);
        hSpacerL->setObjectName("hSpacerL");
        hSpacerL->setMinimumSize(QSize(64, 0));

        details->addWidget(hSpacerL);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        os = new QLabel(centralwidget);
        os->setObjectName("os");
        QFont font;
        font.setPointSize(8);
        os->setFont(font);
        os->setTextFormat(Qt::TextFormat::RichText);
        os->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        os->setWordWrap(true);
        os->setOpenExternalLinks(true);

        verticalLayout->addWidget(os);

        version = new QLabel(centralwidget);
        version->setObjectName("version");
        version->setFont(font);
        version->setTextFormat(Qt::TextFormat::RichText);
        version->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        version->setWordWrap(true);
        version->setOpenExternalLinks(true);

        verticalLayout->addWidget(version);

        copyright = new QLabel(centralwidget);
        copyright->setObjectName("copyright");
        copyright->setFont(font);
        copyright->setTextFormat(Qt::TextFormat::RichText);
        copyright->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        copyright->setWordWrap(true);
        copyright->setOpenExternalLinks(true);

        verticalLayout->addWidget(copyright);

        longdesc = new QLabel(centralwidget);
        longdesc->setObjectName("longdesc");
        longdesc->setFont(font);
        longdesc->setTextFormat(Qt::TextFormat::RichText);
        longdesc->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        longdesc->setWordWrap(true);
        longdesc->setOpenExternalLinks(true);

        verticalLayout->addWidget(longdesc);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        license = new QLabel(centralwidget);
        license->setObjectName("license");
        license->setFont(font);
        license->setTextFormat(Qt::TextFormat::RichText);
        license->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        license->setWordWrap(true);
        license->setOpenExternalLinks(true);

        verticalLayout->addWidget(license);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(25, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        user = new QLabel(centralwidget);
        user->setObjectName("user");
        user->setFont(font);
        user->setTextFormat(Qt::TextFormat::RichText);
        user->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        user->setWordWrap(true);
        user->setOpenExternalLinks(true);

        horizontalLayout->addWidget(user);

        horizontalLayout->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(0, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        memorySeparator = new QFrame(centralwidget);
        memorySeparator->setObjectName("memorySeparator");
        memorySeparator->setMinimumSize(QSize(0, 2));
        memorySeparator->setMaximumSize(QSize(16777215, 2));
        memorySeparator->setFrameShape(QFrame::Shape::Panel);
        memorySeparator->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(memorySeparator);

        memoryLbl = new QLabel(centralwidget);
        memoryLbl->setObjectName("memoryLbl");
        memoryLbl->setFont(font);
        memoryLbl->setTextFormat(Qt::TextFormat::RichText);
        memoryLbl->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        memoryLbl->setWordWrap(true);
        memoryLbl->setOpenExternalLinks(true);

        verticalLayout->addWidget(memoryLbl);


        details->addLayout(verticalLayout);

        hSpacerR = new QLabel(centralwidget);
        hSpacerR->setObjectName("hSpacerR");
        hSpacerR->setMinimumSize(QSize(10, 0));

        details->addWidget(hSpacerR);

        details->setStretch(1, 1);

        verticalLayout_3->addLayout(details);

        verticalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        controls = new QHBoxLayout();
        controls->setSpacing(0);
        controls->setObjectName("controls");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        controls->addItem(horizontalSpacer_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setAutoDefault(true);

        controls->addWidget(pushButton);

        spacer = new QSpacerItem(10, 0, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        controls->addItem(spacer);


        verticalLayout_3->addLayout(controls);

        verticalSpacer_3 = new QSpacerItem(0, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        About->setCentralWidget(centralwidget);

        retranslateUi(About);

        pushButton->setDefault(true);


        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QMainWindow *About)
    {
        About->setWindowTitle(QCoreApplication::translate("About", "About Windows", nullptr));
        branding->setText(QString());
        curseofra->setText(QString());
        hSpacerL->setText(QString());
        os->setText(QCoreApplication::translate("About", "os", nullptr));
        version->setText(QCoreApplication::translate("About", "version", nullptr));
        copyright->setText(QCoreApplication::translate("About", "funny copyright", nullptr));
        longdesc->setText(QCoreApplication::translate("About", "<html><head/><body><p>The Windows Vista operating system and its user interface are protected by trademark and other pending or existing intellectual property rights in the Egypt and other countries.</p></body></html>", nullptr));
        license->setText(QCoreApplication::translate("About", "the uhh license thing yeah", nullptr));
        user->setText(QCoreApplication::translate("About", "user", nullptr));
        memoryLbl->setText(QCoreApplication::translate("About", "physical memory", nullptr));
        hSpacerR->setText(QString());
        pushButton->setText(QCoreApplication::translate("About", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
