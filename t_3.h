#ifndef T_3_H
#define T_3_H

#include <QDialog>

namespace Ui {
class t_3;
}

class t_3 : public QDialog
{
    Q_OBJECT

public:
    explicit t_3(QWidget *parent = 0);
    ~t_3();

private:
    Ui::t_3 *ui;
};

#endif // T_3_H
