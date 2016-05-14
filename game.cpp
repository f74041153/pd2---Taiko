#include"game.h"
#include<QGraphicsTextItem>
#include<QFont>
#include<QKeyEvent>
#include<QGraphicsItem>
#include<typeinfo>
#include<QObject>
Game::Game(QWidget*parent)
{
    scene=new QGraphicsScene();
    scene->setSceneRect(0,0,1200,1000);
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1200,1000);
    setBackgroundBrush(QBrush(QImage(":/258057-151210134F263.jpg")));

    goal=new QGraphicsPixmapItem();//initialize the end goal
    goal->setPos(0,100);
    goal->setPixmap(QPixmap(":/63T58PICNkn.png"));
    goal->setFocus();
    scene->addItem(goal);

    score=new Score();//score table
    score->setPos(score->x()+50,score->y()+20);
    scene->addItem(score);

    time=new Time();//time table
    time->setPos(time->x()+650,time->y()+20);
    scene->addItem(time);

    balls=new Create();//initialize to create balls

}

void Game::keyPressEvent(QKeyEvent*event)
{
    if(event->key()==Qt::Key_K)
    {
      if(goal->collidingItems().size()>0)//collide something
      {
           if(((time->t)-4)%2==0)//same as its startime
           score->increase();
       }
    }
    if(event->key()==Qt::Key_J)
    {
      if(goal->collidingItems().size()>0)
      {
          if(((time->t)-4)%2==1)
          score->increase();
       }
    }

}
void Game::clock()//count down
{
    timer=new QTimer();//for clock
    QObject::connect(timer,SIGNAL(timeout()),time,SLOT(decrease()));
    timer->start(1000);
}
void Game::emit_ball()//creat balls
{
    timer1=new QTimer();//for ball
    QObject::connect(timer1,SIGNAL(timeout()),balls,SLOT(create_balls()));
    timer1->start(1000);
}

