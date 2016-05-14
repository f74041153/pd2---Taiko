#include"start_window.h"
#include"game.h"

extern Game*game;

Window::Window(QWidget*parent):QGraphicsView()//initialize start window
{
    scene=new QGraphicsScene();
    scene->setSceneRect(0,0,1200,1000);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1200,1000);
    setBackgroundBrush(QBrush(QImage(":/5360581582_d28b3051d0_o.jpg")));


    button1=new QPushButton("CHALLENGE",this);
    button1->setGeometry(QRect(QPoint(225,100),QSize(300,100)));

    button2=new QPushButton("EXIT",this);
    button2->setGeometry(QRect(QPoint(675,100),QSize(300,100)));

}

