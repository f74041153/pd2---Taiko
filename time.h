#ifndef TIME_H
#define TIME_H

#include<QGraphicsTextItem>

class Time:public QGraphicsTextItem
{
    Q_OBJECT
public:
    Time(QGraphicsItem*parent=0);
    int gettime();
//private:
    int t;
public slots:
    void decrease();
};

#endif // TIME_H
