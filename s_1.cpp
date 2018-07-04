#include "s_1.h"
#include "ui_s_1.h"

#include <qstring.h>
#include <qsqlquery.h>
#include <qdebug.h>

extern QString  username;

s_1::s_1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::s_1)
{
    ui->setupUi(this);
    QString cmd = "select * from s where sno = "+ username  ;
    QSqlQuery q(cmd);

    q.next();

    ui->label_7->setText(q.value(0).toString());
    ui->label_8->setText(q.value(1).toString());
    ui->label_9->setText(q.value(3).toString());
    ui->label_10->setText(q.value(2).toString());
    ui->label_11->setText(q.value(4).toString());

}

s_1::~s_1()
{

    delete ui;
}



