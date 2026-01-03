#include "Snake.h"
#include <iostream>
using namespace std;

Snake::Snake(float x, float y) {
    rect.x = x;
    rect.y = y;
    rect.w = 50.0f; // Width of the snake segment
    rect.h = 50.0f; // Height of the snake segment  
}

void Snake::handleInput(SDL_Keycode key)
{
    switch (key) {
        case SDLK_UP:
            moveUp();
            break;
        case SDLK_DOWN:
            moveDown();
            break;
        case SDLK_LEFT:
            moveLeft();
            break;
        case SDLK_RIGHT:
            moveRight();
            break;
        default:
            break;
    }
}


void Snake::moveUp()
{
    rect.y -= 50.0f;
}

void Snake::moveDown()
{
    rect.y += 50.0f;
}

void Snake::moveLeft()
{
    rect.x -= 50.0f;
}

void Snake::moveRight()
{
    rect.x += 50.0f;
}

void Snake::render(SDL_Renderer* renderer) const
{
    SDL_RenderFillRect(renderer, &rect);
}