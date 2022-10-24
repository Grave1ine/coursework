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

    int jump_height = 1;

    int startY = getY();



    if (_isJumping) {
      if ( _y <= jump_height) {
        _speed = -1;
    } else if (_y >= startY) {
        _speed = 0;
        _isJumping = false;

    }else {
        _y -= _speed;
    }
    }



}

