#ifndef S_1_H
#define S_1_H

#include <QDialog>

namespace Ui {
class s_1;
}

class s_1 : public QDialog
{
    Q_OBJECT

public:
    explicit s_1(QWidget *parent = 0);
    ~s_1();





private:
    Ui::s_1 *ui;
};

#endif // S_1_H
