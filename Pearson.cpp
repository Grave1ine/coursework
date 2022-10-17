#include "Pearson.h"
#include "palette.h"
#include "Game.h"
#include <curses.h>

Pearson * BuildingPearson()
{
    Pearson * pearson = new Pearson;       //выделение динамической памяти
    pearson -> PearsonSize = 1;
    pearson -> body[0] = {15, 20};
    //pearson -> body[1] = {20, 21};
    //pearson -> body[2] = {20, 16};
    //pearson -> body[3] = {21, 16};
    //pearson -> direction = Pearson::SPACE;     //изначальное направление
    return pearson;
}

void PrintPearson(Pearson * pearson)
{
    if (!pearson)
    {
        return;
    }

    attron(COLOR_PAIR(Pearson_palett));

    for (int i = 0; i < pearson -> PearsonSize; ++ i)
    {
        mvprintw(pearson -> body[i].y, pearson -> body[i].x, ">");     //было mvaddch
        //mvaddch(pearson -> body[i].y, pearson -> body[i].x, '>');
        //mvprintw(pearson -> body[i].y, pearson -> body[i].x, "");
        move(pearson -> body[i].y, pearson -> body[i].x);
        addch('0');
    }
    attroff(COLOR_PAIR(Pearson_palett));
}

void DestroyPearson(Pearson * pearson)
{
    delete pearson;
}

GameState RunPearson(Pearson * pearson, Pearson::Direction direction) //direction это перечисление типа Direction
{
    if (!pearson)
    {
        return GameState::BOARD;
    }
    if(!MovePerson(pearson))
    {
        return GameState::EXIT;
    }

    pearson->direction = direction;
    return GameState::BOARD;
}

bool MovePerson(Pearson * pearson)
{
    if (!pearson)
    {
        return false;
    }

    /*for (int i = 0; i + 1 < pearson -> PearsonSize; ++i)
    {
        pearson[i + 1] = pearson[i];
    }*/

    switch (pearson -> direction)
    {
        case Pearson::SPACE:

        int a = 5;
        if (pearson->body[0].y > a)
        {
        --pearson->body[0].y;
        }

        break;
    }
    return true;
}


