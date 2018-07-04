#ifndef T_6_H
#define T_6_H

#include <QDialog>

namespace Ui {
class t_6;
}

class t_6 : public QDialog
{
    Q_OBJECT

public:
    explicit t_6(QWidget *parent = 0);
    ~t_6();

private slots:
    void on_pushButton_clicked();

private:
    Ui::t_6 *ui;
};

#endif // T_6_H
