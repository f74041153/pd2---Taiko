#ifndef SCORE_WINDOW_H
#define SCORE_WINDOW_H
#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include<QGraphicsTextItem>
#include<QPushButton>
class Score_window:public QGraphicsView
{
public:
    Score_window(QWidget*parent=0);
    QGraphicsScene*scene;
    QPushButton*button1;
    QPushButton*button2;

};
#endif // SCORE_WINDOW_H
