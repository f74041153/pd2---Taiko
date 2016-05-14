#include"time.h"
#include<QFont>
#include"game.h"

extern Game*game;

Time::Time(QGraphicsItem*parent):QGraphicsTextItem(parent)
{
    t=30;
    setPlainText(QString("TIME:")+QString::number(t));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",28));

}
void Time::decrease()
{
    t--;
    setPlainText(QString("TIME:")+QString::number(t));
    if(t==0)
    {
        game->timer->stop();//stop the time table to count down
     }
}
int Time::gettime()
{

    return t;

}
