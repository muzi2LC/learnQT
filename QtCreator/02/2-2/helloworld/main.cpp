#include<QApplication>
#include<QDialog>
#include<QLabel>
int main(int argc,char *argv[])
{
    QApplication a(argc,argv);
    QDialog w;
    w.resize(400,300);
    QLabel label(&w);
    label.move(120,120);
    label.setText("Hello World!你好 QT!");
    w.show();
    return a.exec();
}
