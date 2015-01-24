#include <QCoreApplication>
#include <QDebug>
#include <QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
#if 0
    //判断路径是否存在
    QDir mDir("/home/ming");
    qDebug() << mDir.exists();
#endif

#if 0
    //使用foreach循环判断mDir.drives()返回的QFileInfo——也就是根目录
    QDir mDir;
    foreach (QFileInfo mItm, mDir.drives()) {
        qDebug() << mItm.absoluteFilePath();

    }//go throught a collection without dealing either either either
#endif

#if 0
    //判断路径是否存在，不存在就创建
    QDir mDir;
    QString mPath = "/home/ming/zzz";

    if(!mDir.exists(mPath))
    {
        mDir.mkpath(mPath);
        qDebug() << "created";
    }
    else
        qDebug() << "Already exists";
#endif

    //使用forearh循环处理mDir.entryInfoList()返回的每个QFileInfo。
    QDir mDir("/home/ming/");
    foreach (QFileInfo mItm, mDir.entryInfoList()) {
        if(mItm.isDir())
            qDebug() << "Dir: " << mItm.absoluteFilePath();
        if(mItm.isFile())
            qDebug() << "File: " << mItm.absoluteFilePath();
    }
    return a.exec();
}
