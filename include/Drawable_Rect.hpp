//
// Created by Dmitry Morozov on 23/10/22.
//

#ifndef COURSEWORK_DEV_DRAWABLE_RECT_HPP
#define COURSEWORK_DEV_DRAWABLE_RECT_HPP

#include "Drawable.hpp"

#include <curses.h>
#include <tuple>
#include <vector>


class DrawableRect : public Drawable {
public:
    DrawableRect(int, int, const std::string &);


    void mvAdd(WINDOW *) override;

    void clear(WINDOW *) override;

    int getHeight() const;

    int getWidth() const;


private:
    int _height = 1;
    int _width = 1;
    std::vector<std::string> _rect_icon;

    void _loadTexture(const std::string &);
};


#endif //COURSEWORK_DEV_DRAWABLE_RECT_HPP
