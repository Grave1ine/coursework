#ifndef MENU_H
#define MENU_H

#include "Drawable.hpp"

class Menu {
public:
    explicit Menu(WINDOW *);
    std::string runGetChoice();

private:
    int yMax, xMax;
    WINDOW * _parentWindow;
};

#endif // MENU_H
