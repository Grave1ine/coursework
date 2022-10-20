#include "Game.h"
#include "palette.h"
#include <cstdlib>
#include <curses.h>


Game::Game() {
    initscr();                         //включение графической библиотеки
    keypad(stdscr, TRUE);              //обработка командных клавиш (стрелки)
    curs_set(0);                       //убирает мигающий курсор в консоли
    InitPalette();
    noecho();
    refresh();

    _board = new GameBoard();
    //_pearson = new Pearson(stdscr, Point(0, 0));
    _menu = new Menu();

    _isRunning = true;



}


void Game::runGame()              //функция запуска игры принимает переменную game типа указатель
{
getch();
}

bool Game::isOver() const {

    return !_isRunning;
}

Game::~Game() {
    attrset(A_NORMAL);
    endwin();

}


