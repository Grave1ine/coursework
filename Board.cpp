#include "palette.h"
#include "Board.h"

#include <curses.h>


void GameBoard::PrintBoard() const        //функция вывода поля принимает указатель board типа GameBoard
{


    attron(COLOR_PAIR(BOARD));
    for (int i = 0; i < height; ++i)     //указатель на выстоу игр. поля
    {
        for (int j = 0; j < width; ++j)  //указатель на ширину игр. поля
        {
            move(i, j);                                     //заполнение поля?
            addch(' ');                                     //заполнение поля (функционал из библиотеки)
        }
    }
    attroff(COLOR_PAIR(BOARD));
}


GameBoard::GameBoard() {

    height = BOARD_HEIGHT;
    width = BOARD_WIDTH;
}

GS::GameState GameBoard::RunBoard(GameBoard::BoardKey key) {

    switch (key) {
        case GameBoard::ESC:          //выхрд из игры
            return GS::MENU;
    }
    return GS::BOARD;
}


