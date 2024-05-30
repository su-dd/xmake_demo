#include <QApplication>
#include "CurrentWidget.h"
#include "LibraryStaticWidget.h"
#include "LibrarySharedLinkWidget.h"
#include <QLibrary>
#include <QDebug>
#include <QWidget>
#include <memory>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CurrentWidget oCurrentWidget;
    oCurrentWidget.show();

    LibraryStaticWidget oLibraryStaticWidget;
    oLibraryStaticWidget.show();

    LibrarySharedLinkWidget oLibrarySharedLinkWidget;
    oLibrarySharedLinkWidget.show();

    QLibrary oLibrary("LibraryShared.dll");
    if (!oLibrary.load())
    {
        qDebug() << "LibraryShared.dll load failed";
        return a.exec();
    }

    using MyDllFunction = QWidget *(*)(QWidget *parent);
    MyDllFunction oFunc = (MyDllFunction)oLibrary.resolve("createLibrarySharedWidget");
    std::shared_ptr<QWidget> pLibrarySharedWidget(oFunc(nullptr));
    pLibrarySharedWidget->show();

    return a.exec();
}