#include "t_4.h"
#include "ui_t_4.h"
#include <qsqlquery.h>
#include <qdebug.h>

extern QString  username;

t_4::t_4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::t_4)
{
    ui->setupUi(this);
}

t_4::~t_4()
{
    delete ui;
}

void t_4::on_pushButton_clicked()
{
    QString sno = ui->lineEdit->text();
    QString cno = ui->lineEdit_2->text();
    QString g = ui->lineEdit_3->text();

    if(g.toInt() >= 0 && g.toInt() <= 100)
    {

        QString cmd = "UPDATE sc set grade = "+g+" where sno = "+sno+" and cno = "+cno;
        QSqlQuery q;
        if(q.exec(cmd) == false)
        {
            ui->label_5->setText("错误，检查后再输");
        }
        else
        {
            this->close();
        }
    }
    else
    {
        ui->label_5->setText("错误，检查后再输");
    }
}
