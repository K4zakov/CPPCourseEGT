#include "Game.h"
#include <iostream>

using namespace std;

//Window dimenstions and game state
Game* game = NULL;
const int WINDOW_WIDTH = 1920;
const int WINDOW_HEIGHT = 1080;

int main(int argc, char* argv[]) {

    //game init
    game = new Game();
    game->init("game window task1",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        WINDOW_WIDTH, WINDOW_HEIGHT,
        SDL_WINDOW_RESIZABLE);

    //running game loop
    while (game->isRunning()) {

        game->handleEvents();
        game->update();
        game->render();

    }

    //Game cleanup
    game->clean();

    return 0;
}