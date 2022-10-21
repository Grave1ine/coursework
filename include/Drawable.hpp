//
// Created by Dmitry Morozov on 20/10/22.
//

#ifndef COURSEWORK_MAIN_DEV_DRAWABLE_HPP
#define COURSEWORK_MAIN_DEV_DRAWABLE_HPP

#include <ncurses.h>
#include <string>

class Drawable {
public:


    Drawable(int, int);

    [[nodiscard]] int getX() const { return _x; }


    [[nodiscard]] int getY() const { return _y; }

    virtual void mvAdd(WINDOW *) = 0;


private:
    int _x;
    int _y;


};



#endif //COURSEWORK_MAIN_DEV_DRAWABLE_HPP
