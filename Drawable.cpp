//
// Created by Dmitry Morozov on 20/10/22.
//

#include "Drawable.hpp"

Drawable::Drawable() : Drawable(0, 0, ' ') {}

Drawable::Drawable(int x, int y, chtype icon) : _x(x), _y(y), _icon(icon) {}

int Drawable::getX() const {

    return _x;

}

int Drawable::getY() const {

    return _y;

}


