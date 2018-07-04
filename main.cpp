#include "mainwindow.h"
#include <QApplication>
#include <QSqlQuery>
#include <QDebug>
#include <qtextcodec.h>

#include "student.h"

//定义全局变量，
QSqlDatabase qDatabases;
QString username;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QSqlDatabase qDatabases = QSqlDatabase::addDatabase("QMYSQL"); //设置相关参数
    qDatabases.setDatabaseName("nuaa_db");    // 需要与数据库中的一致
    qDatabases.setHostName("127.0.0.1");    // 主机名(地址)
    qDatabases.setUserName("root");  //设置用户名
    qDatabases.setPassword("971116");  //设置密码
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

    if(qDatabases.open())
    {
       qDebug() <<"shujuku\n";
    }

    w.show();

    return a.exec();
}
