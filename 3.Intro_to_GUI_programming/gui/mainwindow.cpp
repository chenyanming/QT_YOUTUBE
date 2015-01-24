#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //use the pointer "ui" to set the pushButton's text
    ui->pushButton->setText("close");
}

MainWindow::~MainWindow()
{
    delete ui;
}
