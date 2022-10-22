//
// Created by Dmitry Morozov on 23/10/22.
//

#include "Drawable_Str.hpp"

DrawableStr::DrawableStr(int y, int x, std::string s_icon) : Drawable(y, x) {

    this->_s_icon = s_icon;
}

void DrawableStr::mvAdd(WINDOW *window) {

    mvwaddstr(window, getX(), getY(), _s_icon.c_str());
}