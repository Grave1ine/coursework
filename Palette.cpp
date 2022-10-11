#include "palette.h"
#include <curses.h>

void InitPalette()
{
    start_color();                                             //инициализация цветов
    init_pair(Board_pol, COLOR_RED, COLOR_GREEN);              //инициализация палитры (имя из перечисления, цвет символов, цвет фона)
    init_pair(Menu_palett, COLOR_WHITE, COLOR_BLUE);           //цвет шрифта, цвет фона под буквами
}
