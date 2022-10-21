//
// Created by Dmitry Morozov on 21/10/22.
//

#ifndef COURSEWORK_MAIN_DEV_BONUS_HPP
#define COURSEWORK_MAIN_DEV_BONUS_HPP

#include "Drawable.hpp"

#include <string>


class Bonus : public Drawable {
public:
    Bonus(int, int);

    void mvAdd(WINDOW *) override;

private:
    std::string _s_icon;
};


#endif //COURSEWORK_MAIN_DEV_BONUS_HPP
