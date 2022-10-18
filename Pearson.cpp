#include "Pearson.h"
#include "palette.h"
#include "Game.h"
#include <curses.h>


void Pearson::PrintPearson() const {

    attron(COLOR_PAIR(Pearson_palett));

    for (int i = 0; i < PearsonSize; ++i) {
        mvprintw(position.y, position.x, "%c", shape);
    }
    attroff(COLOR_PAIR(Pearson_palett));
}


GameState Pearson::RunPearson() const //direction это перечисление типа Direction
{

    if (!isMove()) {
        return GameState::EXIT;
    }

    return GameState::BOARD;
}

bool Pearson::isMove() const {

    return direction != STAY;
}

//Person constructor
Pearson::Pearson() {

    position = Point{15, 20};
    shape = '0';
    PearsonSize = 1;
    direction = Pearson::STAY;
}
