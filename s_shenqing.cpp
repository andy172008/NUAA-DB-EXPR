#include "s_shenqing.h"
#include "ui_s_shenqing.h"

s_shenqing::s_shenqing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::s_shenqing)
{
    ui->setupUi(this);
}

s_shenqing::~s_shenqing()
{
    delete ui;
}
