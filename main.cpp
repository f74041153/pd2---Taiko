#include<QApplication>
#include"game.h"
#include"start_window.h"
#include<QObject>
#include"w_hide.h"
#include"score_window.h"
#include"showout.h"

Game *game;
Window*window;
Score_window*sw;

int main(int argc,char*argv[])
{
   QApplication app(argc,argv);
   Showout*sh=new Showout();
   sh->showout();  //game start
   QObject::connect(window->button2,SIGNAL(clicked()),&app,SLOT(quit()));
   QObject::connect(sw->button2,SIGNAL(clicked()),&app,SLOT(quit()));
   return app.exec();

}

