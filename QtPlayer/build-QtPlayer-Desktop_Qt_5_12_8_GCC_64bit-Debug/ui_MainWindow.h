/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widgetCentral;
    QVBoxLayout *layoutCentral;
    QLabel *labFullscreen;
    QFrame *frmScreen;
    QGridLayout *layoutScreen;
    QFrame *frmVideo;
    QFrame *frmControl;
    QVBoxLayout *layoutControl;
    QHBoxLayout *layoutURL;
    QLabel *labURL;
    QLineEdit *editURL;
    QPushButton *btnDirectoy;
    QHBoxLayout *layoutProgress;
    QSlider *sliderProgress;
    QLabel *labProgress;
    QHBoxLayout *layoutButtons;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QPushButton *btnFastBackward;
    QPushButton *btnFastForward;
    QSpacerItem *spacerVolume;
    QLabel *labVolume;
    QSlider *sliderVolume;
    QSpacerItem *spacerAbout;
    QPushButton *btnAbout;
    QPushButton *btnQuit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(760, 492);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/QtMedia.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
""));
        widgetCentral = new QWidget(MainWindow);
        widgetCentral->setObjectName(QString::fromUtf8("widgetCentral"));
        layoutCentral = new QVBoxLayout(widgetCentral);
        layoutCentral->setObjectName(QString::fromUtf8("layoutCentral"));
        labFullscreen = new QLabel(widgetCentral);
        labFullscreen->setObjectName(QString::fromUtf8("labFullscreen"));
        labFullscreen->setStyleSheet(QString::fromUtf8("color:red"));
        labFullscreen->setFrameShape(QFrame::NoFrame);
        labFullscreen->setFrameShadow(QFrame::Plain);

        layoutCentral->addWidget(labFullscreen);

        frmScreen = new QFrame(widgetCentral);
        frmScreen->setObjectName(QString::fromUtf8("frmScreen"));
        frmScreen->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frmScreen->sizePolicy().hasHeightForWidth());
        frmScreen->setSizePolicy(sizePolicy);
        frmScreen->setMinimumSize(QSize(0, 0));
        frmScreen->setMouseTracking(false);
        frmScreen->setToolTipDuration(-1);
        frmScreen->setFrameShape(QFrame::NoFrame);
        frmScreen->setFrameShadow(QFrame::Raised);
        frmScreen->setLineWidth(2);
        layoutScreen = new QGridLayout(frmScreen);
        layoutScreen->setSpacing(0);
        layoutScreen->setObjectName(QString::fromUtf8("layoutScreen"));
        layoutScreen->setContentsMargins(0, 0, 0, 0);
        frmVideo = new QFrame(frmScreen);
        frmVideo->setObjectName(QString::fromUtf8("frmVideo"));
        frmVideo->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frmVideo->sizePolicy().hasHeightForWidth());
        frmVideo->setSizePolicy(sizePolicy1);
        frmVideo->setMinimumSize(QSize(0, 64));
        frmVideo->setMouseTracking(false);
        frmVideo->setAutoFillBackground(false);
        frmVideo->setStyleSheet(QString::fromUtf8("border-image: url(:/images/QtPlayer.jpg);"));
        frmVideo->setFrameShape(QFrame::NoFrame);
        frmVideo->setFrameShadow(QFrame::Plain);
        frmVideo->setLineWidth(0);

        layoutScreen->addWidget(frmVideo, 0, 0, 1, 1);


        layoutCentral->addWidget(frmScreen);

        frmControl = new QFrame(widgetCentral);
        frmControl->setObjectName(QString::fromUtf8("frmControl"));
        frmControl->setStyleSheet(QString::fromUtf8(""));
        frmControl->setFrameShape(QFrame::Box);
        frmControl->setFrameShadow(QFrame::Sunken);
        layoutControl = new QVBoxLayout(frmControl);
        layoutControl->setObjectName(QString::fromUtf8("layoutControl"));
        layoutURL = new QHBoxLayout();
        layoutURL->setSpacing(6);
        layoutURL->setObjectName(QString::fromUtf8("layoutURL"));
        layoutURL->setSizeConstraint(QLayout::SetDefaultConstraint);
        labURL = new QLabel(frmControl);
        labURL->setObjectName(QString::fromUtf8("labURL"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labURL->sizePolicy().hasHeightForWidth());
        labURL->setSizePolicy(sizePolicy2);
        labURL->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));

        layoutURL->addWidget(labURL);

        editURL = new QLineEdit(frmControl);
        editURL->setObjectName(QString::fromUtf8("editURL"));
        editURL->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(editURL->sizePolicy().hasHeightForWidth());
        editURL->setSizePolicy(sizePolicy3);
        editURL->setAutoFillBackground(false);
        editURL->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);\n"
"\n"
""));
        editURL->setCursorPosition(0);
        editURL->setReadOnly(false);

        layoutURL->addWidget(editURL);

        btnDirectoy = new QPushButton(frmControl);
        btnDirectoy->setObjectName(QString::fromUtf8("btnDirectoy"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnDirectoy->sizePolicy().hasHeightForWidth());
        btnDirectoy->setSizePolicy(sizePolicy4);
        btnDirectoy->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));

        layoutURL->addWidget(btnDirectoy);


        layoutControl->addLayout(layoutURL);

        layoutProgress = new QHBoxLayout();
        layoutProgress->setObjectName(QString::fromUtf8("layoutProgress"));
        sliderProgress = new QSlider(frmControl);
        sliderProgress->setObjectName(QString::fromUtf8("sliderProgress"));
        sliderProgress->setEnabled(false);
        sliderProgress->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        sliderProgress->setMaximum(10000);
        sliderProgress->setPageStep(100);
        sliderProgress->setOrientation(Qt::Horizontal);
        sliderProgress->setTickPosition(QSlider::TicksBelow);
        sliderProgress->setTickInterval(100);

        layoutProgress->addWidget(sliderProgress);

        labProgress = new QLabel(frmControl);
        labProgress->setObjectName(QString::fromUtf8("labProgress"));
        labProgress->setStyleSheet(QString::fromUtf8("color: rgb(211, 215, 207);"));
        labProgress->setFrameShape(QFrame::Panel);
        labProgress->setFrameShadow(QFrame::Sunken);
        labProgress->setAlignment(Qt::AlignCenter);
        labProgress->setMargin(1);

        layoutProgress->addWidget(labProgress);


        layoutControl->addLayout(layoutProgress);

        layoutButtons = new QHBoxLayout();
        layoutButtons->setObjectName(QString::fromUtf8("layoutButtons"));
        btnPlay = new QPushButton(frmControl);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        btnPlay->setEnabled(false);
        btnPlay->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Play.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon1);
        btnPlay->setFlat(false);

        layoutButtons->addWidget(btnPlay);

        btnPause = new QPushButton(frmControl);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        btnPause->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Pause.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon2);

        layoutButtons->addWidget(btnPause);

        btnStop = new QPushButton(frmControl);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        btnStop->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Stop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon3);

        layoutButtons->addWidget(btnStop);

        btnFastBackward = new QPushButton(frmControl);
        btnFastBackward->setObjectName(QString::fromUtf8("btnFastBackward"));
        btnFastBackward->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/FastBackward.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnFastBackward->setIcon(icon4);

        layoutButtons->addWidget(btnFastBackward);

        btnFastForward = new QPushButton(frmControl);
        btnFastForward->setObjectName(QString::fromUtf8("btnFastForward"));
        btnFastForward->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/FastForward.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnFastForward->setIcon(icon5);

        layoutButtons->addWidget(btnFastForward);

        spacerVolume = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutButtons->addItem(spacerVolume);

        labVolume = new QLabel(frmControl);
        labVolume->setObjectName(QString::fromUtf8("labVolume"));
        labVolume->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));

        layoutButtons->addWidget(labVolume);

        sliderVolume = new QSlider(frmControl);
        sliderVolume->setObjectName(QString::fromUtf8("sliderVolume"));
        sliderVolume->setEnabled(true);
        sliderVolume->setMinimumSize(QSize(64, 0));
        sliderVolume->setMouseTracking(false);
        sliderVolume->setMaximum(100);
        sliderVolume->setValue(80);
        sliderVolume->setOrientation(Qt::Horizontal);
        sliderVolume->setInvertedAppearance(false);
        sliderVolume->setInvertedControls(false);
        sliderVolume->setTickPosition(QSlider::NoTicks);
        sliderVolume->setTickInterval(10);

        layoutButtons->addWidget(sliderVolume);

        spacerAbout = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutButtons->addItem(spacerAbout);

        btnAbout = new QPushButton(frmControl);
        btnAbout->setObjectName(QString::fromUtf8("btnAbout"));
        btnAbout->setEnabled(true);
        btnAbout->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/About.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnAbout->setIcon(icon6);

        layoutButtons->addWidget(btnAbout);

        btnQuit = new QPushButton(frmControl);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setEnabled(true);
        btnQuit->setStyleSheet(QString::fromUtf8("color: rgb(238, 238, 236);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/Quit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnQuit->setIcon(icon7);

        layoutButtons->addWidget(btnQuit);


        layoutControl->addLayout(layoutButtons);


        layoutCentral->addWidget(frmControl);

        MainWindow->setCentralWidget(widgetCentral);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\237\272\344\272\216Qt \345\222\214vlc\347\232\204\346\265\201\345\252\222\344\275\223\346\222\255\346\224\276\345\231\250", nullptr));
#ifndef QT_NO_TOOLTIP
        MainWindow->setToolTip(QApplication::translate("MainWindow", "\345\237\272\344\272\216Qt \345\222\214vlc\347\232\204\346\265\201\345\252\222\344\275\223\346\222\255\346\224\276\345\231\250", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labFullscreen->setToolTip(QApplication::translate("MainWindow", "\345\205\250\345\261\217", nullptr));
#endif // QT_NO_TOOLTIP
        labFullscreen->setText(QApplication::translate("MainWindow", "\346\270\251\351\246\250\346\217\220\347\244\272\357\274\232\345\234\250\350\247\206\351\242\221\345\214\272\345\237\237\345\217\214\345\207\273\351\274\240\346\240\207\344\273\245\345\210\207\346\215\242\345\205\250\345\261\217\345\222\214\347\252\227\345\217\243\346\250\241\345\274\217\342\225\256(\342\225\257\311\233\342\225\260)\342\225\255", nullptr));
#ifndef QT_NO_TOOLTIP
        frmScreen->setToolTip(QApplication::translate("MainWindow", "\350\247\206\351\242\221", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        frmVideo->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        frmControl->setToolTip(QApplication::translate("MainWindow", "\346\216\247\345\210\266", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        frmControl->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        labURL->setToolTip(QApplication::translate("MainWindow", "URL", nullptr));
#endif // QT_NO_TOOLTIP
        labURL->setText(QApplication::translate("MainWindow", "URL:", nullptr));
#ifndef QT_NO_TOOLTIP
        editURL->setToolTip(QApplication::translate("MainWindow", "URL", nullptr));
#endif // QT_NO_TOOLTIP
        btnDirectoy->setText(QApplication::translate("MainWindow", "\350\267\257\345\276\204", nullptr));
#ifndef QT_NO_TOOLTIP
        sliderProgress->setToolTip(QApplication::translate("MainWindow", "\350\277\233\345\272\246", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labProgress->setToolTip(QApplication::translate("MainWindow", "\350\277\233\345\272\246", nullptr));
#endif // QT_NO_TOOLTIP
        labProgress->setText(QApplication::translate("MainWindow", "<html><head/><body><p>00:00:00/00:00:00</p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        btnPlay->setToolTip(QApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
#endif // QT_NO_TOOLTIP
        btnPlay->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276", nullptr));
#ifndef QT_NO_TOOLTIP
        btnPause->setToolTip(QApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
#endif // QT_NO_TOOLTIP
        btnPause->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
#ifndef QT_NO_TOOLTIP
        btnStop->setToolTip(QApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
#endif // QT_NO_TOOLTIP
        btnStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242", nullptr));
#ifndef QT_NO_TOOLTIP
        btnFastBackward->setToolTip(QApplication::translate("MainWindow", "\345\277\253\351\200\200", nullptr));
#endif // QT_NO_TOOLTIP
        btnFastBackward->setText(QApplication::translate("MainWindow", "\345\277\253\351\200\200", nullptr));
#ifndef QT_NO_TOOLTIP
        btnFastForward->setToolTip(QApplication::translate("MainWindow", "\345\277\253\350\277\233", nullptr));
#endif // QT_NO_TOOLTIP
        btnFastForward->setText(QApplication::translate("MainWindow", "\345\277\253\350\277\233", nullptr));
#ifndef QT_NO_TOOLTIP
        labVolume->setToolTip(QApplication::translate("MainWindow", "\351\237\263\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
        labVolume->setText(QApplication::translate("MainWindow", "\351\237\263\351\207\217:", nullptr));
#ifndef QT_NO_TOOLTIP
        sliderVolume->setToolTip(QApplication::translate("MainWindow", "\351\237\263\351\207\217", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        btnAbout->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
#endif // QT_NO_TOOLTIP
        btnAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216...", nullptr));
#ifndef QT_NO_TOOLTIP
        btnQuit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        btnQuit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
