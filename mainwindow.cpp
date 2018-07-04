#include <QApplication>
#include <qdebug.h>
#include <QSqlQuery>
#include <qstring.h>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "student.h"

//extern QSqlDatabase qDatabases;
extern QString  username;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //这是一个登陆界面



    //登陆检验，与数据库中的用户名密码进行比对

    int studentFlag = 0;
    int teachFlag = 0;





    QString pwd ;

    username = ui->lineEdit->text();
    pwd = ui->lineEdit_2->text();

    if(ui->radioButton->isChecked())
    {

        QString cmd = "select * from s where sno = "+ username +" and spwd = '"+ pwd +"'";
        qDebug() << cmd;
        QSqlQuery q(cmd);
        studentFlag = q.size();

    }
    else if(ui->radioButton_2->isChecked())
    {
        QString cmd = "select * from t where tno = "+ username +" and tpwd = '"+ pwd +"'";
        QSqlQuery q(cmd);
        teachFlag = q.size();
    }







    //学生登陆成功
    if(studentFlag == 1 )
    {
        s = new Student();
        this->hide();

        s->exec();

    }
    //管理者登陆成功
    else if(teachFlag == 1)
    {
        t = new Teacher();
        this->hide();
        t->exec();


    }
    //登陆失败
    {
        ui->label->setText("请检查登录信息后重试");
    }
}
