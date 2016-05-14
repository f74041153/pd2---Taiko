#ifndef START_WINDOW_H
#define START_WINDOW_H
#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include<QTimer>
#include<QPushButton>

class Window:public QGraphicsView
{
public:
    Window(QWidget*parent=0);
    QGraphicsScene*scene;
    QPushButton*button1;
    QPushButton*button2;


};




#endif // START_WINDOW_H
