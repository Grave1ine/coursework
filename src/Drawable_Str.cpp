//
// Created by Dmitry Morozov on 23/10/22.
//

#include "Drawable_Str.hpp"

#include <utility>

DrawableStr::DrawableStr(int y, int x, std::string s_icon) : Drawable(y, x) {

    this->_s_icon = std::move(s_icon);
}

void DrawableStr::mvAdd(WINDOW *window) {

    mvwaddstr(window, getX(), getY(), _s_icon.c_str());
}

void DrawableStr::clear(WINDOW *) {

    std::string spaces(_s_icon.size(), ' ');
    mvwaddstr(stdscr, getX(), getY(), spaces.c_str());
}


