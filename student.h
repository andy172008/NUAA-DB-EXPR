#ifndef STUDENT_H
#define STUDENT_H

#include <QDialog>
#include "s_1.h"
#include "s_2.h"
#include "s_3.h"
#include "s_4.h"
#include "s_5.h"

namespace Ui {
class Student;
}

class Student : public QDialog
{
    Q_OBJECT

public:
    explicit Student(QWidget *parent = 0);
    ~Student();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Student *ui;
    s_1 *s1;
    s_2 *s2;
    s_3 *s3;
    s_4 *s4;
    s_5 *s5;
};

#endif // STUDENT_H
