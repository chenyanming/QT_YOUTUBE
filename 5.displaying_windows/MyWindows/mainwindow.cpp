#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //4. make good use of the space of window
    setCentralWidget(ui->plainTextEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{
    //MyDialog mDialog;
    //mDialog.setModal(false);
    //mDialog.exec();

    //MyDialog mDialog;
    //mDialog.show();

    mDialog = new MyDialog(this);//mainwindow is the parent of the dialog, so when the mainwindow close, the dialog is destroyed in memory. We can make multiple windows and interact with every window.
    mDialog->show();
}
