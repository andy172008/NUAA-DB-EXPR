#ifndef S_2_H
#define S_2_H

#include <QDialog>

namespace Ui {
class s_2;
}

class s_2 : public QDialog
{
    Q_OBJECT

public:
    explicit s_2(QWidget *parent = 0);
    ~s_2();

private:
    Ui::s_2 *ui;
};

#endif // S_2_H
