#include "Bonus.hpp"
#include "Game.h"
#include "Drawable.hpp"
#include "palette.h"

#include <curses.h>


Game::Game(int y, int x) {

    noecho();
    curs_set(0);

    _board = new GameBoard(y, x);
    _board->initBoard();
    _menu = new Menu();
    _isRunning = true;
    _t_rex_move1 = new T_rex(BOARD_HEIGHT - 20, 10);
    _t_rex_move2 = new T_rex(BOARD_HEIGHT - 20, 10);

}


bool Game::isRunning() const {

    return _isRunning;
}

Game::~Game() {

    attrset(A_NORMAL);
    delete _bonus;
    delete _t_rex_move1;
    delete _t_rex_move2;
    delete _board;

    endwin();

}

void Game::processInput() {

    chtype userInput = _board->getInput();

}

Game::Game() : Game(BOARD_HEIGHT, BOARD_WIDTH) {

}

void Game::redraw() {

    _board->refreshBoard();


}

void Game::updateState() {

    if (_bonus == nullptr) {
        _bonus = new Bonus(10, 50);
        _board->add(_bonus);

    }


    if (_is_step) {
        _board->add(_t_rex_move2);


    } else {
        _board->add(_t_rex_move1);

    }
    _is_step = !_is_step;


}

void Game::run() {

    while (isRunning()) {

        processInput();

        updateState();

        redraw();

    }

}



