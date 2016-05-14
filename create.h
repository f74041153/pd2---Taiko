#ifndef CREATE_H
#define CREATE_H

#include<QObject>
#include<QGraphicsItem>
#include"ball.h"
#include<QTimer>
#include"ball2.h"
class Create:public QObject
{
    Q_OBJECT
public:

    QTimer*timer;
    Ball2*b2;
    Ball *b1;
public slots:
    void create_balls();

};
#endif // CREATE_H
