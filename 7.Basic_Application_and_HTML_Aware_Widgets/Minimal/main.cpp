#include <QApplication>//For the "QtWidgets"
#include <QtWidgets>//For the "QLabel Widget", and should add "QT += widgets" to .pro
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QLabel *MyLabel = new QLabel("<b>Hello</b> <font color = red><i>World</i>");//use HTML code
    MyLabel->show();

    return app.exec();
}
