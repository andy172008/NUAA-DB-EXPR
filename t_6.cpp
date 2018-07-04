#include "t_6.h"
#include "ui_t_6.h"
#include <qsqlquery.h>
#include <qdebug.h>

extern QString  username;

t_6::t_6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::t_6)
{
    ui->setupUi(this);
}

t_6::~t_6()
{
    delete ui;
}

void t_6::on_pushButton_clicked()
{
    QString cno = ui->lineEdit->text();
    QString cname = ui->lineEdit_2->text();
    QString ccredit = ui->lineEdit_3->text();

    QString cmd = "INSERT INTO c (cno,cname,ccredit) VALUES ("+cno+",'"+cname+"',"+ccredit+")";
    QSqlQuery q;

    if(q.exec(cmd) == false)
    {
        ui->label_5->setText("错误，检查后再输");
    }
    else
    {
        ui->label_5->setText("成功开设课程 ");
    }


}
