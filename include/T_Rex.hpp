//
// Created by Dmitry Morozov on 23/10/22.
//

#ifndef COURSEWORK_DEV_T_REX_HPP
#define COURSEWORK_DEV_T_REX_HPP

#include "Drawable_Rect.hpp"

class T_rex : public DrawableRect {
public:
    T_rex(int, int);

    void jump();

    void move();

    [[nodiscard]] bool isJump() const;

private:
    int _floor_level;
    int _speed;
    bool _isJumping;
};


#endif //COURSEWORK_DEV_T_REX_HPP
