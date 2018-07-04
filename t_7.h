#ifndef T_7_H
#define T_7_H

#include <QDialog>

namespace Ui {
class t_7;
}

class t_7 : public QDialog
{
    Q_OBJECT

public:
    explicit t_7(QWidget *parent = 0);
    ~t_7();

private slots:
    void on_pushButton_clicked();

private:
    Ui::t_7 *ui;
};

#endif // T_7_H
