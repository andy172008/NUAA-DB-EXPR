#include "s_2.h"
#include "ui_s_2.h"

#include <qstring.h>
#include <qsqlquery.h>
#include <qdebug.h>


extern QString  username;

s_2::s_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::s_2)
{
    ui->setupUi(this);
    QString cmd = "select cno,cname,ccredit,grade from all_info where sno = "+ username  ;
    QSqlQuery q(cmd);

    qDebug () <<cmd<< q.size();
    ui->tableWidget->setRowCount(q.size());
    int i = 0;

    while(q.next())
    {

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(q.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(q.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(q.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(q.value(3).toString()));

        i++;
    }
}

s_2::~s_2()
{
    delete ui;
}
