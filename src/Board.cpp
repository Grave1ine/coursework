#include "palette.h"
#include "Board.h"

#include <curses.h>


void GameBoard::printBoard() const        //функция вывода поля принимает указатель board типа GameBoard
{
}

GameBoard::GameBoard(int height, int width) : _height(height), _width(width) {

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    boardWin = newwin(height, width, yMax / 2 - height / 2, xMax / 2 - width / 2);
    _ground = height - 4;

}

void GameBoard::initBoard() {

    clearBoard();
    refreshBoard();

}

void GameBoard::setBorder() {

    box(boardWin, 0, 0);
}

void GameBoard::refreshBoard() {

    wrefresh(boardWin);

}


void GameBoard::clearBoard() {

    wclear(boardWin);
    setBorder();
    drawRoadLine();

}

chtype GameBoard::getInput() const {

    beep();

    return wgetch(boardWin);

}

void GameBoard::add(Drawable *drawable) {

    drawable->mvAdd(boardWin);
}

void GameBoard::drawRoadLine() {

    mvwhline(boardWin, _ground - 1, 1, ACS_HLINE, _width - 2);
}

void GameBoard::ClearObject(Drawable *drawable) {

    drawable->clear(boardWin);


}

int GameBoard::getGroundY() const {

    return _ground;

}



