//
// Created by Dmitry Morozov on 20/10/22.
//

#ifndef COURSEWORK_MAIN_DEV_DRAWABLE_HPP
#define COURSEWORK_MAIN_DEV_DRAWABLE_HPP

#include <ncurses.h>

class Drawable {
public:
    Drawable();

    Drawable(int, int, chtype);

    [[nodiscard]] int getX() const;

    [[nodiscard]] int getY() const;

private:
    int _x;
    int _y;
    chtype _icon;

};


#endif //COURSEWORK_MAIN_DEV_DRAWABLE_HPP
