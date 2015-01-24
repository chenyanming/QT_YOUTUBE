#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //1.create a window and set title
    QWidget *window = new QWidget;
    window->setWindowTitle("My app");

    //2.create a gridlayout and put the layout on the window
    QGridLayout *layout = new QGridLayout;
    window->setLayout(layout);

    //3.create a laybel and a line edit
    QLabel *laybel = new QLabel("Name");
    QLineEdit *edit = new QLineEdit;

    //4.add the laybel and line edit to the layout
    layout->addWidget(laybel,0,0);
    layout->addWidget(edit,0,1);

    window->show();

    return app.exec();
}

