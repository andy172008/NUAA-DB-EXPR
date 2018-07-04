#include "s_5.h"
#include "ui_s_5.h"

#include <qstring.h>
#include <qsqlquery.h>
#include <qdebug.h>

extern QString  username;

s_5::s_5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::s_5)
{
    ui->setupUi(this);
    QString cmd = "select cno,cname,ccredit,grade from all_info where sno = "+ username  ;
    QSqlQuery q(cmd);


    qDebug () <<cmd<< q.size();
    int i = 0;

    ui->tableWidget->setRowCount(q.size());
    while(q.next())
    {

        ui->tableWidget->setItem(i,0,new QTableWidgetItem(q.value(0).toString()));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(q.value(1).toString()));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(q.value(2).toString()));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(q.value(3).toString()));

        i++;
    }
}

s_5::~s_5()
{
    delete ui;
}

void s_5::on_pushButton_clicked()
{
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem()))
    {
        return;
    }

    int row = ui->tableWidget->currentItem()->row();
    qDebug() << "row"<<row;
    QString cno = ui->tableWidget->item(row,0)->text();
    qDebug() << cno;

    QString cmd = "delete from sc where cno = "+cno+" and sno = "+username;
    QSqlQuery q(cmd);
    this->close();
}
