#include<QTimer>
#include<QGraphicsScene>
#include<Qlist>
#include<QKeyEvent>
#include"game.h"
#include <QWidget>
#include<typeinfo>
#include"ball.h"

extern Game*game;
Ball::Ball(QGraphicsItem *parent):QObject(),QGraphicsPixmapItem(parent)
{

}

void Ball::move()
{
      if(collidingItems().size()>0)//collide the end goal
      {
         scene()->removeItem(this);
         delete(this);
      }

      setPos(x()-30,y());//move right 30



}

