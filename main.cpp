#include "Game.h"
#include "Screen.h"

int main() {

    initscr();
    refresh();

    Game game;

    while (game.isRunning()) {

        game.processInput();

        game.updateState();

        game.redraw();

    }


    return 0;
}
