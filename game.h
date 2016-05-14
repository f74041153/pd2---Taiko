#ifndef GAME_H
#define GAME_H

#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include"score.h"
#include"time.h"
#include"ball.h"
#include"create.h"
#include<QTimer>

class Game:public QGraphicsView
{

public:
    Game(QWidget*parent=0);
    QGraphicsScene*scene;
    Time *time;
    Score *score;
    QGraphicsPixmapItem*goal;
    Create*balls;
    Ball*b;
    void keyPressEvent(QKeyEvent*event);
    QTimer*timer;//for clock
    QTimer *timer1;//for ball
    void clock();
    void emit_ball();


};
#endif // GAME_H
