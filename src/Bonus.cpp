//
// Created by Dmitry Morozov on 21/10/22.
//

#include "Bonus.hpp"
#include "Drawable.hpp"


Bonus::Bonus(int y , int x ) : Drawable(y, x) {
    _s_icon = "Bon!";
}

void Bonus::mvAdd(WINDOW * window) {
    mvwaddstr(window, getX(), getY(), _s_icon.c_str());
}
