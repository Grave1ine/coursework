#ifndef BOARD_H
#define BOARD_H

#include "Drawable.hpp"

#include <ncurses.h>


class GameBoard                         //структура игрового пространства
{
public:

    GameBoard(int width, int height);

    void initBoard();

    void ClearObject(Drawable *drawable);

    void setBorder();

    [[nodiscard]] int getGroundY() const;

    void drawRoadLine();

    void add(Drawable *drawable);

    void printBoard() const;

    void refreshBoard();

    void clearBoard();

    [[nodiscard]] chtype getInput() const;




private:

    WINDOW *boardWin;
    int _height;
    int _width;
    int _ground;

};


#endif // BOARD_H
