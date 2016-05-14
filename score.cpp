#include"score.h"
#include<QFont>
#include<QGraphicsScene>
#include"game.h"


Score::Score(QGraphicsItem*parent):QGraphicsTextItem(parent)
{
    s=0;
    setPlainText(QString("SCORE:")+QString::number(s));
    setDefaultTextColor(Qt::green);
    setFont(QFont("times",28));

}
void Score::increase()
{
    s++;
    setPlainText(QString("SCORE:")+QString::number(s));
}
int Score::getscore()
{
    return s;

}

