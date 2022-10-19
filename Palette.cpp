#include "palette.h"
#include <curses.h>

void InitPalette()
{
    start_color();                                             //инициализация цветов
    init_pair(BOARD, COLOR_RED, COLOR_BLUE);               //инициализация палитры (имя из перечисления, цвет символов, цвет фона)
    init_pair(MENU  , COLOR_WHITE, COLOR_BLUE);           //цвет шрифта, цвет фона под буквами
    init_pair(PERSON, COLOR_RED, COLOR_YELLOW);
    init_pair(SCREEN, COLOR_BLUE, COLOR_WHITE);         //заставка
    init_pair(TEXT, COLOR_RED, COLOR_WHITE);                   //цвет шрифта на заставке
    init_pair(TERRA, COLOR_GREEN, COLOR_YELLOW);
}
