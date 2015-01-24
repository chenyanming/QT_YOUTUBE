#include <QApplication>
#include <QWidget>//window
#include <QPushButton>//pushbutton
#include <QHBoxLayout>//hboxlayout
#include <QVBoxLayout>//vboxlayout

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);

   //1.create a window
   QWidget *window = new QWidget;

   //4.create 3 buttons and initilize the text
   QPushButton *button1 = new QPushButton("one");
   QPushButton *button2 = new QPushButton("two");
   QPushButton *button3 = new QPushButton("three");

   //5.create a hlayout/vlayout
   //QHBoxLayout *layout = new QHBoxLayout;
   QVBoxLayout *layout = new QVBoxLayout;

   //7.add buttons to the layout
   layout->addWidget(button1);
   layout->addWidget(button2);
   layout->addWidget(button3);

   //6.put the layout on the window widget
   window->setLayout(layout);

   //3.set the window's title
   window->setWindowTitle("My App");
   //2.show the window
   window->show();
   return app.exec();
}

