#include"score_window.h"
#include<QFont>
#include"game.h"
#include<QGraphicsTextItem>
#include"score.h"
extern Game*game;

Score_window::Score_window(QWidget*parent):QGraphicsView()
{
    scene=new QGraphicsScene();
    scene->setSceneRect(0,0,400,300);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(400,300);

    button1=new QPushButton("RESTART",this);
    button1->setGeometry(QRect(QPoint(125,100),QSize(100,30)));

    button2=new QPushButton("EXIT",this);
    button2->setGeometry(QRect(QPoint(125,200),QSize(100,30)));

}
