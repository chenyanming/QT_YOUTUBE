#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    //everything is an object, including QMainWindow, use macro Q_OBJECT to demonstrate
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    //create a pointer "ui"
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
