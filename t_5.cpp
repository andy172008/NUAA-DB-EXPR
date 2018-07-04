#include "t_5.h"
#include "ui_t_5.h"
#include <qsqlquery.h>
#include <qdebug.h>

extern QString  username;

t_5::t_5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::t_5)
{
    ui->setupUi(this);
}

t_5::~t_5()
{
    delete ui;
}

void t_5::on_pushButton_clicked()
{
    QString cno = ui->lineEdit->text();

    QString cmd = "select * from  all_info where cno = "+ cno +" ORDER BY grade DESC";
    QSqlQuery q(cmd);

    ui->tableWidget->setRowCount(q.size());

    int i = 0;

    while(q.next())
    {

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(q.value(1).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(q.value(4).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(q.value(0).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(q.value(3).toString()));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(q.value(2).toString()));




        i++;
    }
}
