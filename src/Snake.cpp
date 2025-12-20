#include "Snake.h"

Snake::Snake(SDL_Renderer* renderer, SDL_Window* window) : x(0), y(0), direction('D') {
    SDL_FRect rect = {x, y, 50.0, 50.0}; //x, y, w, h
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); //r, g, b, a
    SDL_RenderFillRect(renderer, &rect);
}
