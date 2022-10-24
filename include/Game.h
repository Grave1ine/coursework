#ifndef GAME_H
#define GAME_H

#include "Bonus.hpp"
#include "Board.h"
#include "GameState.h"
#include "Menu.h"
#include "T_Rex.hpp"

constexpr int BOARD_WIDTH = 110;

constexpr int BOARD_HEIGHT = 30;

class Game {

public:
    Game(int, int);

    Game();

    ~Game();


    void processInput();

    void updateState();

    void redraw();

    void run();

    [[nodiscard]] bool isRunning() const;

private:
    GameBoard *_board;
    Menu *_menu;
    Bonus *_bonus{};
    T_rex *_t_rex_move1{};
    T_rex *_t_rex_move2{};

    bool _is_step = false;

    bool _isRunning;

};


#endif // GAME_H
