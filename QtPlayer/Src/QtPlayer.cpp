#include "MainWindow.h"

#include <QApplication>
#include <QTranslator>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator tr;
    // Qt5以后，内置标准窗口翻译文件已从qt_xxx.qm更新至qtbase_xxx.qm中，
    // 但并未提供简体中文翻译文件，权以繁体中文代之
    if (tr.load(":/translations/qtbase_zh_TW"))
        a.installTranslator(&tr);

    MainWindow w(nullptr, true);
    w.show();
    return a.exec();
}
