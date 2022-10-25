#include "Bonus.hpp"
#include "Game.hpp"
#include "Drawable.hpp"
#include "palette.hpp"
#include "T_Rex.hpp"
#include "T_Rex_Step.hpp"

#include <curses.h>


Game::Game(int y, int x) {

    noecho();
    curs_set(0);

    _board = new GameBoard(y, x);
    _board->initBoard();
    _menu = new Menu();
    _isRunning = true;
    _t_rex_move1 = new T_rex(_board->getGroundY() - 6, 10); // Plus height of T-rex. Refactor it to constant
    _t_rex_move2 = new T_Rex_step(_board->getGroundY() - 6, 10);

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
    switch (userInput) {
        case 'q':
            _isRunning = false;
            break;
        case ' ':
            _t_rex_move1->jump();
            break;
        default:
            break;
    }

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

    if (_t_rex_move1->isJump()) {
        beep();
        _board->ClearObject(_t_rex_move1);
        beep();
        _t_rex_move1->move();
        beep();
        _board->add(_t_rex_move1);
        beep();
    } else {
        if (_is_step) {
            _board->ClearObject(_t_rex_move1);
            _board->add(_t_rex_move2);


        } else {
            _board->ClearObject(_t_rex_move2);
            _board->add(_t_rex_move1);

        }
        _is_step = !_is_step;
    }
}


void Game::run() {

    while (isRunning()) {

        processInput();

        updateState();

        redraw();

    }

}



