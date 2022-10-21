#include "Pearson.h"
#include "palette.h"
#include "Game.h"
#include <curses.h>


void Pearson::PrintPearson() const {

    attron(COLOR_PAIR(PERSON));

    for (int i = 0; i < PearsonSize; ++i) {
        mvwprintw(cur_win, position.y, position.x, "%c", shape);
    }
    attroff(COLOR_PAIR(PERSON));
}


GS::GameState Pearson::RunPearson() const //direction это перечисление типа Direction
{

    if (!isMove()) {
        return GS::GameState::EXIT;
    }

    return GS::GameState::BOARD;
}

bool Pearson::isMove() const {

    return direction != STAY;
}

Pearson::Pearson(WINDOW *window, Point position) {

    cur_win = window;
    PearsonSize = 1;
    this->position = position;
    shape = 'O';
    direction = STAY;
    getmaxyx(cur_win, w_size.y, w_size.x);

}

void Pearson::Jump() {

}

void Pearson::mvUP() {

    if (position.y > 0) {
        position.y--;
    }
}

void Pearson::mvDOWN() {

    if (position.y < w_size.y - PearsonSize) {
        position.y++;
    }

}

