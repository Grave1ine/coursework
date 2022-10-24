//
// Created by Dmitry Morozov on 23/10/22.
//

#include "T_Rex.hpp"

T_rex::T_rex(int y, int x) : DrawableRect(y, x, "../textures/trx_move1.trx") {

    _speed = 0;
    _isJumping = false;
}

void T_rex::jump() {

    if (!_isJumping) {
        _isJumping = true;
        _speed = 1;
    }
}


void T_rex::move() {

    if (_isJumping) {
        if (_speed > 0) {
            _y -= _speed;
            _speed++;
        } else {
            _y += _speed;
            _speed--;
        }
        if (_speed == 0) {
            _isJumping = false;
        }
    }
}


