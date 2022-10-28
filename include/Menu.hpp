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

    static std::string _getItemFromString( const std::string&, int );
};

#endif // MENU_H
