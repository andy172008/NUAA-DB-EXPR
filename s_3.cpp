#include "s_3.h"
#include "ui_s_3.h"

#include <qstring.h>
#include <qsqlquery.h>

extern QString  username;

s_3::s_3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::s_3)
{
    ui->setupUi(this);
}

s_3::~s_3()
{
    delete ui;
}
