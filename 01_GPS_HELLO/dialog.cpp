#include "dialog.h"
#include "ui_dialog.h"
//#include <QProcess>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    //QProcess *cmd = new QProcess;
    //cmd->start("/bin/GPS");
}
