#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
//It is part of the core framework, and it is the application itself. It create an instance a.
    QCoreApplication a(argc, argv);
//Qstring is part of core framework
    QString mStr = "hello world";
//<QDebug> qDebug()
    qDebug() << "hello ming";
    qDebug() << mStr;
//waiting to close it
    return a.exec();
}
