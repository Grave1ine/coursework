//
// Created by Dmitry Morozov on 23/10/22.
//

#ifndef COURSEWORK_DEV_DRAWABLE_RECT_HPP
#define COURSEWORK_DEV_DRAWABLE_RECT_HPP

#include "Drawable.hpp"

#include <ncurses.h>
#include <tuple>
#include <vector>


class DrawableRect : public Drawable {
public:
    DrawableRect(int, int, const std::string &);

    void mvAdd(WINDOW *) override;


private:
    int _height;
    int _width;
    std::vector<std::string> _rect_icon;

    std::pair<int, int> _loadTexture(const std::string &);
};


#endif //COURSEWORK_DEV_DRAWABLE_RECT_HPP
