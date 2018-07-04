#include "t_3.h"
#include "ui_t_3.h"
#include <qsqlquery.h>
#include <qdebug.h>

extern QString  username;

t_3::t_3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::t_3)
{
    ui->setupUi(this);
    QString cmd = "select * from  c" ;
    QSqlQuery q(cmd);

    ui->tableWidget->setRowCount(q.size());

    int i = 0;

    while(q.next())
    {

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(q.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(q.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(q.value(2).toString()));



        i++;
    }
}

t_3::~t_3()
{
    delete ui;
}
