#include "Game.h"
#include "Screen.h"

int main() {

    initscr();
    refresh();

    Game trxGame;

    trxGame.run();

    return 0;
}
