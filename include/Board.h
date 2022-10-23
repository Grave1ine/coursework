#ifndef BOARD_H
#define BOARD_H

#include "Drawable.hpp"

#include <ncurses.h>


class GameBoard                         //структура игрового пространства
{
public:

    GameBoard(int width, int height);

    void initBoard();

    void setBorder();

    void drawRoadLine();

    void add( Drawable * drawable);

    void printBoard() const;

    void refreshBoard();

    void clearBoard();

    [[nodiscard]] chtype getInput() const;


private:

    WINDOW *boardWin;
    int _height;
    int _width;

};


#endif // BOARD_H
