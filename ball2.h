#ifndef BALL2_H
#define BALL2_H
#include<QGraphicsItem>
#include <QGraphicsPixmapItem>
#include<Qobject>

class Ball2:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Ball2(QGraphicsItem *parent=0);


public slots:

    void move();

};
#endif // BALL2_H
