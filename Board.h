#ifndef BOARD_H
#define BOARD_H

#include <ncurses.h>

constexpr int BOARD_WIDTH = 110;

constexpr int BOARD_HEIGHT = 30;

class GameBoard                         //структура игрового пространства
{
public:


    GameBoard();

    GameBoard(int width, int height);

    void InitBoard();

    void SetBorder();

    void PrintBoard() const;

private:
    int width;
    int height;


    WINDOW *boardWin;

};


#endif // BOARD_H
