#ifndef S_SHENQING_H
#define S_SHENQING_H

#include <QDialog>

namespace Ui {
class s_shenqing;
}

class s_shenqing : public QDialog
{
    Q_OBJECT

public:
    explicit s_shenqing(QWidget *parent = 0);
    ~s_shenqing();

private:
    Ui::s_shenqing *ui;
};

#endif // S_SHENQING_H
