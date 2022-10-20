#include "Game.h"
#include "Screen.h"

int main()
{
    //screen(GameBoard * board);
    //screen();

    Game game;          //переменная game типа указатель равна функции BuildingGame (создания игры)
    game.runGame();
                           //функция DestroyGame (удаление игры) принимает переменную типа указатель game
    return 0;
}
