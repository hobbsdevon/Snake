#include "Stage.h"
#include <iostream>
using namespace std;

Stage::Stage(SDL_Renderer* renderer, SDL_Window* window) {
    const float RECT_WIDTH = 50.0f;
    const float RECT_HEIGHT = 50.0f;
    int windowWidth, windowHeight;
    SDL_GetWindowSize(window, &windowWidth, &windowHeight);

    for(float x = 0; x < windowWidth; x += RECT_WIDTH){
        for(float y = 0; y < windowHeight; y += RECT_HEIGHT){
            SDL_FRect rect = {x, y, RECT_WIDTH, RECT_HEIGHT}; //x, y, w, h
            SDL_SetRenderDrawColor(renderer, 128, 128, 128, 255); //r, g, b, a
            SDL_RenderRect(renderer, &rect);
        }
    }
}
