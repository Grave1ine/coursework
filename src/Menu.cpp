#include "Menu.hpp"
#include "palette.hpp"
#include <curses.h>

Menu::Menu(WINDOW *Parent_Window) {


    getmaxyx(Parent_Window, yMax, xMax);
    _parentWindow = Parent_Window;

}

std::string Menu::runGetChoice() {

    int width = 10;
    WINDOW *_menu_win = derwin( _parentWindow, yMax - 3, xMax - 3, 3, 3);
    wrefresh(_menu_win);
    keypad(_menu_win, true);
    std::string choices[4] = {"Start", "Help", "TOP", "Exit"};

    int choice{};
    std::string choice_str;
    int highlight = 0;

    while (choice != 27) {
        for (int i = 0; i < 4; i++) {
            if (i == highlight)
                wattron(_menu_win, A_REVERSE);
            mvwprintw(_menu_win, i + 1, 1, choices[i].c_str());
            wattroff(_menu_win, A_REVERSE);
        }

        choice = wgetch(_menu_win);
        switch (choice) {
            case KEY_UP:
                highlight--;
                if (highlight == -1)
                    highlight = 0;
                break;
            case KEY_DOWN:
                highlight++;
                if (highlight == 4)
                    highlight = 3;
                break;
            default:
                break;
        }
        if (choice == 10) {
            choice_str = choices[highlight];
            break;
        }
    }

    delwin(_menu_win);

    return choice_str;
}
