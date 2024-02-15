#include "Game.h"
#include <iostream>

//Constructor
Game::Game() {

	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;
	Game::speed = 1;

}

//Destructor
Game::~Game() {
	clean();
}


//Initialise the game window, renderer and game state
bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		gameWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (gameWindow != 0)
		{

			gameRenderer = SDL_CreateRenderer(gameWindow, -1, 0);
			if (gameRenderer != 0)
			{

				SDL_SetRenderDrawColor(gameRenderer, 255, 255, 255, 0);

				SDL_Surface* tempSurface = SDL_LoadBMP("assets/image.bmp");

				texture = SDL_CreateTextureFromSurface(gameRenderer, tempSurface);

				SDL_FreeSurface(tempSurface);

				SDL_QueryTexture(texture, NULL, NULL, &sourceRectangle.w, &sourceRectangle.h);

				//src rect
				sourceRectangle.x = 0;
				sourceRectangle.y = 0;
				sourceRectangle.w = 225;
				sourceRectangle.h = 225;

				//dest rect
				destinationRectangle.x = 0;
				destinationRectangle.y = 0;
				destinationRectangle.w = 225;
				destinationRectangle.h = 225;

			}
			else {

				return false;

			}
		}
		else {

			return false;

		}
	}
	else {

		return false;

	}

	running = true;
	return true;

}

//rendering objects
void Game::render() {

	SDL_RenderClear(gameRenderer);

	SDL_RenderCopy(gameRenderer, texture, &sourceRectangle, &destinationRectangle);

	SDL_RenderPresent(gameRenderer);
}

//event handel
void Game::handleEvents() {

	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;

		}
	}
}

//Update the game state and objects
void Game::update() {

	//Task 1 - Make the picture move from left to right and back
	int ww, wh;
	SDL_GetWindowSize(gameWindow, &ww, &wh);
	destinationRectangle.y = (wh - destinationRectangle.h) / 2;

	if (SDL_GetTicks() % 30 == 0) {
		destinationRectangle.x += speed;

		//windows borders
		if ((destinationRectangle.x + destinationRectangle.w >= ww) || (destinationRectangle.x <= 0)) {
			speed *= -1;
			//speed change on hitting edge
			if (speed < 0) speed--;
			else speed++;
		}
	}
}

void Game::clean() {


	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);
	SDL_Quit();

}

//checks if game isRunning
bool Game::isRunning() {

	return Game::running;

}