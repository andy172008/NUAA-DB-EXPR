#include "t_2.h"
#include "ui_t_2.h"
#include <qsqlquery.h>
#include <qdebug.h>

extern QString  username;

t_2::t_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::t_2)
{
    ui->setupUi(this);
    QString cmd = "select * from s " ;
    QSqlQuery q(cmd);

    ui->tableWidget->setRowCount(q.size());

    int i = 0;

    while(q.next())
    {

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(q.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(q.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(q.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(q.value(3).toString()));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(q.value(4).toString()));


        i++;
    }
}

t_2::~t_2()
{
    delete ui;
}
