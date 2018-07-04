#include "teacher.h"
#include "ui_teacher.h"

Teacher::Teacher(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Teacher)
{
    ui->setupUi(this);
}

Teacher::~Teacher()
{
    delete ui;
}


void Teacher::on_pushButton_clicked()
{
    t1 = new t_1();
    this->hide();

    t1->exec();
    this->show();
}

void Teacher::on_pushButton_2_clicked()
{
    t2 = new t_2();
    this->hide();

    t2->exec();
    this->show();
}

void Teacher::on_pushButton_3_clicked()
{
    t3 = new t_3();
    this->hide();

    t3->exec();
    this->show();
}

void Teacher::on_pushButton_4_clicked()
{
    t4 = new t_4();
    this->hide();

    t4->exec();
    this->show();
}

void Teacher::on_pushButton_5_clicked()
{
    t5 = new t_5();
    this->hide();

    t5->exec();
    this->show();
}

void Teacher::on_pushButton_6_clicked()
{
    t6 = new t_6();
    this->hide();

    t6->exec();
    this->show();
}

void Teacher::on_pushButton_7_clicked()
{
    t7 = new t_7();
    this->hide();

    t7->exec();
    this->show();
}

void Teacher::on_pushButton_8_clicked()
{
    this->close();
}
