#ifndef TEACHER_H
#define TEACHER_H
#include <t_1.h>
#include <t_2.h>
#include <t_3.h>
#include <t_4.h>
#include <t_5.h>
#include <t_6.h>
#include <t_7.h>

#include <QDialog>

namespace Ui {
class Teacher;
}

class Teacher : public QDialog
{
    Q_OBJECT

public:
    explicit Teacher(QWidget *parent = 0);
    ~Teacher();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Teacher *ui;
    t_1 *t1;
    t_2 *t2;
    t_3 *t3;
    t_4 *t4;
    t_5 *t5;
    t_6 *t6;
    t_7 *t7;
};

#endif // TEACHER_H
