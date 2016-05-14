#ifndef BALL_H
#define BALL_H

#include<QGraphicsItem>
#include <QGraphicsPixmapItem>
#include<Qobject>

class Ball:public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Ball(QGraphicsItem *parent=0);
public slots:

    void move();

};
#endif // BALL_H
