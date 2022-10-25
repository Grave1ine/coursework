//
// Created by Dmitry Morozov on 23/10/22.
//

#include "T_Rex.hpp"

T_rex::T_rex(int y, int x) : DrawableRect(y, x, "../textures/trx_move1.trx") {

    _speed = 0;
    _isJumping = false;
    _floor_level = y;
}

void T_rex::jump() {

    if (!_isJumping) {
        _isJumping = true;
        _speed = 1;
    }
}


bool T_rex::move() {

    _y -= _speed;
    if (_y > (_floor_level - 1)) {
        _speed = 0;
        _isJumping = false;
    }

    if (_y < 5) {
        _speed = _speed * -1;
    }

    return _isJumping;
}

bool T_rex::isJump() const {

    return _isJumping;
}

