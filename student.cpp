#include "student.h"
#include "ui_student.h"

Student::Student(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
}

Student::~Student()
{
    delete ui;
}



void Student::on_pushButton_clicked()
{
    s1 = new s_1();
    this->hide();

    s1->exec();
    this->show();
}

void Student::on_pushButton_2_clicked()
{
    s2 = new s_2();
    this->hide();

    s2->exec();
    this->show();

}

void Student::on_pushButton_3_clicked()
{
    s3 = new s_3();
    this->hide();

    s3->exec();
    this->show();
}

void Student::on_pushButton_4_clicked()
{
    s4 = new s_4();
    this->hide();

    s4->exec();
    this->show();
}

void Student::on_pushButton_5_clicked()
{
    s5 = new s_5();
    this->hide();

    s5->exec();
    this->show();
}

void Student::on_pushButton_6_clicked()
{
    this->close();
    //accept();
}
