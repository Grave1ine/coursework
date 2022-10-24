//
// Created by Dmitry Morozov on 23/10/22.
//

#ifndef COURSEWORK_DEV_DRAWABLE_STR_HPP
#define COURSEWORK_DEV_DRAWABLE_STR_HPP

#include "Drawable.hpp"

#include <ncurses.h>


class DrawableStr : public Drawable {
public:
    DrawableStr(int, int, std::string);

    void mvAdd(WINDOW *) override;

    void clear(WINDOW *) override;

private:
    std::string _s_icon;
};


#endif //COURSEWORK_DEV_DRAWABLE_STR_HPP
