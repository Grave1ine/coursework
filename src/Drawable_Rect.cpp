//
// Created by Dmitry Morozov on 23/10/22.
//

#include "Drawable_Rect.hpp"

DrawableRect::DrawableRect(int y, int x, int height, int width) : Drawable(y, x) {

    this->_height = height;
    this->_width = width;
}
