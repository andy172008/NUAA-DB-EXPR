#ifndef S_3_H
#define S_3_H

#include <QDialog>

namespace Ui {
class s_3;
}

class s_3 : public QDialog
{
    Q_OBJECT

public:
    explicit s_3(QWidget *parent = 0);
    ~s_3();

private:
    Ui::s_3 *ui;
};

#endif // S_3_H
