#ifndef T_2_H
#define T_2_H

#include <QDialog>

namespace Ui {
class t_2;
}

class t_2 : public QDialog
{
    Q_OBJECT

public:
    explicit t_2(QWidget *parent = 0);
    ~t_2();

private:
    Ui::t_2 *ui;
};

#endif // T_2_H
