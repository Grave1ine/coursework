#include "Menu.hpp"
#include "palette.hpp"
#include <curses.h>

Menu::Menu(WINDOW *Parent_Window) {


    getmaxyx(Parent_Window, yMax, xMax);
    _parentWindow = Parent_Window;

}

std::string Menu::runGetChoice() {

    int width = 10;


    WINDOW *_menu_win = derwin(_parentWindow, 7, 10, 1, 1);

    wrefresh(_menu_win);
    keypad(_menu_win, true);
    std::string choices[4] = {"Start", "Help", "TOP", "Exit"};
    int choice{};
    std::string choice_str;
    int highlight = 0;

    while (choice != 27) {
        for (int i = 0; i < 4; i++) {
            if (i == highlight) {
                wattron(_menu_win, A_REVERSE);
            }
            mvwprintw(_menu_win, i + 1, 1, _getItemFromString(choices[i], width).c_str());
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

    werase(_menu_win);
    wrefresh(_menu_win);
    delwin(_menu_win);

    return choice_str;
}

//Create centered Item string with given width
std::string Menu::_getItemFromString(const std::string &item_str, int win_width) {

    auto item_width = item_str.length();
    auto left_space = (win_width - item_width) / 2;
    auto right_space = win_width - item_width - left_space - 1;

    std::string item;
    item.append(left_space, ' ');
    item.append(item_str);
    item.append(right_space, ' ');

    return item;
}
