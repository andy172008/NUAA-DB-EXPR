#ifndef T_4_H
#define T_4_H

#include <QDialog>

namespace Ui {
class t_4;
}

class t_4 : public QDialog
{
    Q_OBJECT

public:
    explicit t_4(QWidget *parent = 0);
    ~t_4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::t_4 *ui;
};

#endif // T_4_H
