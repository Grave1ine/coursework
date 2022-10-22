#ifndef GAME_H
#define GAME_H

#include "Bonus.hpp"
//#include "Control.h"
#include "Board.h"
#include "GameState.h"
#include "Menu.h"
//#include "Pearson.h"
//#include "Screen.h"

constexpr int BOARD_WIDTH = 110;

constexpr int BOARD_HEIGHT = 30;

struct Game                            //
{
    Game(int, int);

    Game();

    ~Game();


    void processInput();

    void updateState();

    void redraw();

    [[nodiscard]] bool isRunning() const;

private:
    GameBoard *_board;
    //Pearson *_pearson;
    Menu *_menu;
    Bonus *_bonus;

    bool _isRunning;

};


#endif // GAME_H
