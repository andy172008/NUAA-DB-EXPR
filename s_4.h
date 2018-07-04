#ifndef S_4_H
#define S_4_H

#include <QDialog>

namespace Ui {
class s_4;
}

class s_4 : public QDialog
{
    Q_OBJECT

public:
    explicit s_4(QWidget *parent = 0);
    ~s_4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::s_4 *ui;
};

#endif // S_4_H
