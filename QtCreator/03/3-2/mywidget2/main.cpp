#include<QApplication>
#include<QWidget>
#include<QDebug>

int main(int argc,char *argv[])
{
    QApplication a(argc,argv);
    QWidget widget;
    widget.show();
    widget.resize(400,300);
    widget.move(200,100);
    int x=widget.x();
    int y=widget.y();
    qDebug("x:,%d",x);
    qDebug("y:,%d",y);


    QRect geometry=widget.geometry();
    QRect frame=widget.frameGeometry();
    qDebug()<<"geometry: "<<geometry<<"frame: "<<frame;
    return a.exec();
}
