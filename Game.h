#ifndef GAME_H
#define GAME_H

//#include "Control.h"
#include "Board.h"
#include "GameState.h"
#include "Menu.h"
//#include "Pearson.h"
//#include "Screen.h"

struct Game                            //
{
    Game();
    ~Game();

    void runGame();             //функция запуска игры принимает переменную game типа указатель

    void getInput();

    void updateState();

    void render();

    bool isOver() const;

private:
    GameBoard *_board;
    //Pearson *_pearson;
    Menu *_menu;

    bool _isRunning;

};


#endif // GAME_H
