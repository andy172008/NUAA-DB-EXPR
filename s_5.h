#ifndef S_5_H
#define S_5_H

#include <QDialog>

namespace Ui {
class s_5;
}

class s_5 : public QDialog
{
    Q_OBJECT

public:
    explicit s_5(QWidget *parent = 0);
    ~s_5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::s_5 *ui;
};

#endif // S_5_H
