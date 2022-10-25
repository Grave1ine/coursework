#include "Game.hpp"
#include "Screen.hpp"

int main() {

    initscr();
    refresh();

    Game trxGame;

    trxGame.run();

    return 0;
}
