#include "Game.h"

int main()
{
    Game * game = BuildingGame();             //переменная game типа указатель равна функции BuildingGame (создания игры)
    RunGame(game);                            //функция RunGame (запуск игры) принимает переменную типа указатель game
    DestroyGame(game);                        //функция DestroyGame (удаление игры) принимает переменную типа указатель game
    return 0;
}
