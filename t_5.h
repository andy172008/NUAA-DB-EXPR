#ifndef T_5_H
#define T_5_H

#include <QDialog>

namespace Ui {
class t_5;
}

class t_5 : public QDialog
{
    Q_OBJECT

public:
    explicit t_5(QWidget *parent = 0);
    ~t_5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::t_5 *ui;
};

#endif // T_5_H
