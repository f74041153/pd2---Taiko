#include"create.h"
#include<QGraphicsScene>
#include"ball.h"
#include"game.h"
#include"score_window.h"

extern Game*game;
extern Score_window*sw;

void Create::create_balls()
{
    switch(game->time->gettime()%2)//create balls by time
    {
      case 0:
            {
             b1=new Ball();//initial
             b1->setPixmap(QPixmap(":/stock-vector-blue-fire-ball-illustration-on-black-background-for-design-82653733.png"));
             b1->setPos(1200,125);
             game->scene->addItem(b1);
             b1->setFlag(QGraphicsItem::ItemIsFocusable);
             b1->setFocus();
             QTimer*timer=new QTimer();
             connect(timer,SIGNAL(timeout()),b1,SLOT(move()));//ball move with time
             timer->start(100);
             break;
            }
      case 1:
            {
             b2=new Ball2();
             b2->setPixmap(QPixmap(":/Fireball.png"));
             b2->setPos(1200,125);
             game->scene->addItem(b2);
             b2->setFlag(QGraphicsItem::ItemIsFocusable);
             b2->setFocus();
             timer=new QTimer();
             connect(timer,SIGNAL(timeout()),b2,SLOT(move()));//ball move with time
             timer->start(100);
             break;
            }
    }

    switch(rand()%3)//randomly choose the create time
    {
      case 0:game->timer1->start(2000);
             break;
      case 1:game->timer1->start(1000);
             break;
      case 2:game->timer1->start(3000);
             break;
    }
    if(game->time->gettime()<=0)//stop the connect to create ball
    {
        game->timer1->stop();
        sw->show();
    }
}
