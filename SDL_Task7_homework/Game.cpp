#include "Game.h"
#include <iostream>

Game::Game() {

	Game::gameWindow = NULL;
	Game::gameRenderer = NULL;
	Game::running = true;
	Game::picSpeed = 5;
	Game::isMousePressed = false;
	Game::picPos.x = (1000 / 2) - (destinationRectangle.w / 2);
	Game::picPos.y = (800 / 2) - (destinationRectangle.h / 2);
}

Game::~Game() {
	clean();
}


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


				sourceRectangle.x = 0;
				sourceRectangle.y = 0;
				sourceRectangle.w = 225;
				sourceRectangle.h = 225;


				destinationRectangle.w = 225;
				destinationRectangle.h = 225;

				int windowWidth = 1920;
				int windowHeight = 1080;

				picPos.x = (windowWidth / 2) - (destinationRectangle.w / 2);
				picPos.y = (windowHeight / 2) - (destinationRectangle.h / 2);


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

void Game::render() {

	SDL_RenderClear(gameRenderer);

	SDL_RenderCopy(gameRenderer, texture, &sourceRectangle, &destinationRectangle);

	SDL_RenderPresent(gameRenderer);
}

void Game::handleEvents() {

	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
			case SDLK_UP:
				picPos.y -= picSpeed;
				break;
			case SDLK_DOWN:
				picPos.y += picSpeed;
				break;
			case SDLK_LEFT:
				picPos.x -= picSpeed;
				break;
			case SDLK_RIGHT:
				picPos.x += picSpeed;
				break;
			}
			break;

			
		case SDL_MOUSEBUTTONDOWN:
			if (event.button.button == SDL_BUTTON_LEFT) {
				picPos.x = event.button.x;
				picPos.y = event.button.y;
				isMousePressed = true;
			}
			break;
		}
	}
}

void Game::update() {

	if (isMousePressed) {

	
		destinationRectangle.x = picPos.x - destinationRectangle.w / 2;
		destinationRectangle.y = picPos.y - destinationRectangle.h / 2;
		isMousePressed = false;
	}
	else {

		
		destinationRectangle.x = picPos.x;
		destinationRectangle.y = picPos.y;
	}

	
	int windowWidth, windowHeight;
	SDL_GetWindowSize(gameWindow, &windowWidth, &windowHeight);

	
	destinationRectangle.x = max(0, min(windowWidth - destinationRectangle.w, destinationRectangle.x));
	destinationRectangle.y = max(0, min(windowHeight - destinationRectangle.h, destinationRectangle.y));

	
	picPos.x = destinationRectangle.x;
	picPos.y = destinationRectangle.y;

}


void Game::clean() {

	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);
	SDL_Quit();

}

bool Game::isRunning() {

	return Game::running;

}