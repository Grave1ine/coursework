#include "palette.h"
#include "Board.h"

#include <curses.h>


void GameBoard::PrintBoard() const        //функция вывода поля принимает указатель board типа GameBoard
{
}


GameBoard::GameBoard() : GameBoard(BOARD_HEIGHT, BOARD_WIDTH) //конструктор
{
}


GameBoard::GameBoard(int height, int width) {

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);
    this->width = width;
    this->height = height;
    boardWin = newwin(height, width, yMax / 2 - height / 2, xMax / 2 - width / 2);
    SetBorder();
    wrefresh(boardWin);
    InitBoard();

}

void GameBoard::InitBoard() {

//    clear();
//    refresh();
}

void GameBoard::SetBorder() {

    box(boardWin, 0, 0);
}


