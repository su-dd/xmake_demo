#include <QCoreApplication>
#include <QString>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    printf("hello xmake\n");

    QString str = "hello xmake";
    str.asprintf("%s\n", str.toStdString().c_str());
    qDebug() << str;
    return a.exec();
}
