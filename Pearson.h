#ifndef PEARSON_H
#define PEARSON_H

#include "GameState.h"

struct Pearson
{
    struct Point         //размер персонажа?
    {
        int x;
        int y;
    };

    enum Direction       //движение
    {
        //NetralPoint,     //изначальная позиция
        SPACE
    };

    Point body[10];      //персонаж
    int PearsonSize;
    Direction direction; //переменная типа
};

Pearson * BuildingPearson();                    //Функция возвращающая указатель типа Pearson
void PrintPearson(Pearson * pearson);           //функция запуска Pearson принимает переменную pearson типа указатель
void DestroyPearson(Pearson * pearson);         //функция удаления   принимает переменную   типа указатель

GameState RunPearson(Pearson * pearson, Pearson::Direction direction); //direction это перечисление типа Direction

bool MovePerson(Pearson * pearson);

#endif // PEARSON_H
