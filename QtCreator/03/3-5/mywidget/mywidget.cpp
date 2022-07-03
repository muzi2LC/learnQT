#include "mywidget.h"
#include "ui_mywidget.h"
#include<QDialog>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
//    connect(ui->showChildButton,&QPushButton::clicked,this,&MyWidget::on_showChildButton_clicked);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::on_showChildButton_clicked()
{
    QDialog *dialog=new QDialog(this);
    dialog->setWindowTitle("我是子窗口");
    dialog->show();
}

