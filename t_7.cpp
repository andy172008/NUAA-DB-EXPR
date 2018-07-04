#include "t_7.h"
#include "ui_t_7.h"
#include <qsqlquery.h>
#include <qdebug.h>

extern QString  username;

t_7::t_7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::t_7)
{
    ui->setupUi(this);
    QString cmd = "select cno,cname,ccredit from c " ;
    QSqlQuery q;
    if(q.exec(cmd) == false)
    {
        qDebug() << "error";
        exit(1);
    }

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

t_7::~t_7()
{
    delete ui;
}

void t_7::on_pushButton_clicked()
{
    if(!ui->tableWidget->isItemSelected(ui->tableWidget->currentItem()))
    {
        return;
    }

    int row = ui->tableWidget->currentItem()->row();
    qDebug() << "row"<<row;
    QString cno = ui->tableWidget->item(row,0)->text();
    qDebug() << cno;

    QString cmd = "delete from c where cno = "+cno;
    QSqlQuery q(cmd);
    this->close();
}
