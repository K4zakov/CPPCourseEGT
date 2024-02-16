#include "Shapes.h"



void Shapes::drawEmptyRectangle(SDL_Renderer* gameRenderer, int x, int y, int w, int h, int thickness) {

	SDL_Rect topLine = { x, y, w, thickness };
	SDL_RenderFillRect(gameRenderer, &topLine);

	SDL_Rect bottomLine = { x, y + h - thickness, w, thickness };
	SDL_RenderFillRect(gameRenderer, &bottomLine);

	SDL_Rect leftLine = { x, y, thickness, h };
	SDL_RenderFillRect(gameRenderer, &leftLine);

	SDL_Rect rightLine = { x + w - thickness, y, thickness, h };
	SDL_RenderFillRect(gameRenderer, &rightLine);

}
//void Shapes::drawHexagon(SDL_Renderer* gameRenderer, int x, int y, int side) {
//
//	const int sides = 6; //5 is to draw a pentagon but we can change it to draw any polygon
//	const double radius = side / (2 * sin(M_PI / 25)); 
//	const double angles = 2 * M_PI / sides;
//
//	for (int i = 0; i < sides; i++) {
//		double angle1 = angles * i;
//		double angle2 = angles * (i + 1);
//		SDL_RenderDrawLine(gameRenderer, x + radius * cos(angle1), y + radius * sin(angle1), x + radius * cos(angle2), y + radius * sin(angle2));
//	}
//
//}