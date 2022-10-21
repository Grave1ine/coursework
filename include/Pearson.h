#ifndef PEARSON_H
#define PEARSON_H

#include "GameState.h"
#include "Point.hpp"

#include <ncurses.h>

struct Pearson {
    Pearson(WINDOW *window, Point position);


    enum Direction       //движение
    {
        UP,     //изначальная позиция
        DOWN,
        STAY
    };

    //Point body[10];      //персонаж ????? WTF?
    WINDOW *cur_win;
    int PearsonSize;
    Point position;
    Point w_size;
    char shape;
    Direction direction; //переменная типа

    //Функция возвращающая указатель типа Pearson
    void PrintPearson() const;           //функция запуска Pearson принимает переменную pearson типа указатель

    [[nodiscard]] GS::GameState RunPearson() const; //direction это перечисление типа Direction

    [[nodiscard]] bool isMove() const;

    void mvUP();

    void mvDOWN();

    void Jump();


};

#endif // PEARSON_H
