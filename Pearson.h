#ifndef PEARSON_H
#define PEARSON_H

#include "GameState.h"

struct Pearson {
    Pearson();

    struct Point         //размер персонажа?
    {
        int x;
        int y;
    };

    enum Direction       //движение
    {
        UP,     //изначальная позиция
        DOWN,
        STAY
    };

    //Point body[10];      //персонаж ????? WTF?
    int PearsonSize;
    Point position{};
    char shape;
    Direction direction; //переменная типа

    //Функция возвращающая указатель типа Pearson
    void PrintPearson() const;           //функция запуска Pearson принимает переменную pearson типа указатель

    GameState RunPearson() const; //direction это перечисление типа Direction

    [[nodiscard]] bool isMove() const;

};

#endif // PEARSON_H
