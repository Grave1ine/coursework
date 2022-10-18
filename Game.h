#ifndef GAME_H
#define GAME_H

//#include "Control.h"
#include "Board.h"
#include "GameState.h"
#include "Menu.h"
#include "Pearson.h"
//#include "Screen.h"

struct Game                            //
{
    Game();
    void BuildingGameSubModels();      //функция инициализации игры
    void RunGame();             //функция запуска игры принимает переменную game типа указатель

    GS::GameState state;                   //инициализация переменной state типа перечисления GameState?
    GameBoard  board;                 //переменная board типа указатель структуры GameBoard
    Menu  menu;
    Pearson * pearson;
    //Screen * screen;

};


#endif // GAME_H
