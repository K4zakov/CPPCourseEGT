#ifndef GAME_H
#define GAME_H
#include <SDL.h>

using namespace std;

class Game {

public:

    Game();
    ~Game();

    bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
    void render();
    void update();
    void handleEvents();
    void clean();
    bool isRunning();

private:

    SDL_Window* gameWindow = NULL;
    SDL_Renderer* gameRenderer = NULL;
    bool running;

    SDL_Texture* texture;
    SDL_Rect sourceRectangle;
    SDL_Rect destinationRectangle;

    int picSpeed;
    SDL_Point picPos;
    bool isMousePressed;

};

#endif