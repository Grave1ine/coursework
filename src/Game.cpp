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

}


bool Game::isRunning() const {

    return _isRunning;
}

Game::~Game() {

    attrset(A_NORMAL);
    delete _bonus;
    delete _t_rex_move1;
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
        _bonus = new Bonus(10, 10);
        _board->add(_bonus);

    }
    _t_rex_move1 = new T_rex(10, 40);
    _board->add(_t_rex_move1);


}

void Game::run() {

    while (isRunning()) {

        processInput();

        updateState();

        redraw();

    }

}



