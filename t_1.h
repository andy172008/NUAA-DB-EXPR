#ifndef T_1_H
#define T_1_H

#include <QDialog>

namespace Ui {
class t_1;
}

class t_1 : public QDialog
{
    Q_OBJECT

public:
    explicit t_1(QWidget *parent = 0);
    ~t_1();

private:
    Ui::t_1 *ui;
};

#endif // T_1_H
