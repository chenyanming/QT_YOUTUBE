#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //the connect is equal to the drag-drop single and slot design
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));//progressBar
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar_2,SLOT(setValue(int)));//progressBar_2
    //the disconnect is the opposite of the connect, as we can have multiple singles and multiple slots, sometimes we need to disconnect it
    disconnect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar_2,SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
