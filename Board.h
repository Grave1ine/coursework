#ifndef BOARD_H
#define BOARD_H

#include "GameState.h"

constexpr int BOARD_WIDTH = 110;
constexpr int BOARD_HEIGHT = 30;

struct GameBoard                         //структура игрового пространства
{
    enum BoardKey {
        ESC,
    };
        int width;
        int height;


   GameBoard();       //функция возвращающая указатель типа GameBoard

    void PrintBoard() const;      //функция вывода поля принимает указатель board типа GameBoard

    static GS::GameState RunBoard(GameBoard::BoardKey key);      //функция запуска игры принимает переменную game типа указатель

};


#endif // BOARD_H
