#include"w_hide.h"
#include"start_window.h"
#include"game.h"

extern Game*game;
extern Window*window;

void W_hide::w_hide() //function to start a game
{
    game->show();
    game->clock();
    game->emit_ball();
}
