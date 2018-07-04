#include "s_4.h"
#include "ui_s_4.h"

#include <qstring.h>
#include <qsqlquery.h>
#include <qdebug.h>

extern QString  username;

s_4::s_4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::s_4)
{
    ui->setupUi(this);
    QString cmd = "select cno,cname,ccredit from c where cno not in (select cno from sc where sno = "+username+")" ;
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

s_4::~s_4()
{
    delete ui;
}

void s_4::on_pushButton_clicked()
{
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem()))
    {
        return;
    }

    int row = ui->tableWidget->currentItem()->row();
    QString cno = ui->tableWidget->item(row,0)->text();
    qDebug() << cno;

    QString cmd = "INSERT INTO sc (sno,cno,grade) VALUES ("+username+","+cno+",-1)";
    QSqlQuery q(cmd);

    qDebug() << q.size();
    this->close();
}
