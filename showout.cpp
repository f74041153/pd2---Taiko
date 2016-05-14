#include"showout.h"
#include"start_window.h"
#include"game.h"
#include"score_window.h"
#include"w_hide.h"

extern Window*window;
extern Game*game;
extern Score_window*sw;

void Showout::showout()//function to start whole game
{
    window=new Window(); //initialize
    game=new Game();
    sw=new Score_window();
    W_hide*w=new W_hide;
    window->show(); //show start window
    QObject::connect(window->button1,SIGNAL(clicked()),window,SLOT(hide()));//hide start window
    QObject::connect(window->button1,SIGNAL(clicked()),w,SLOT(w_hide()));//start to play game
    if(game->time->gettime()==0) //30s game end
    {
        sw->show();   //show restart window
    }
    Showout*sh=new Showout(); //initialize
    QObject::connect(sw->button1,SIGNAL(clicked()),sh,SLOT(showout()));//go back start window play again
    QObject::connect(sw->button1,SIGNAL(clicked()),game,SLOT(close()));//last game window close
    QObject::connect(sw->button1,SIGNAL(clicked()),sw,SLOT(close()));//last game restart window close
    QObject::connect(sw->button2,SIGNAL(clicked()),game,SLOT(close()));//quit whole game
    QObject::connect(sw->button2,SIGNAL(clicked()),sw,SLOT(close()));//quit whole game
    QObject::connect(window->button2,SIGNAL(clicked()),window,SLOT(close()));//quit whole game
}
