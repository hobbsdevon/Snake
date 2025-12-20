#ifndef SNAKE_H
#define SNAKE_H
#include <SDL3/SDL.h>

class Snake {
public:
    float x, y;
    char direction;
    Snake(SDL_Renderer* renderer, SDL_Window* window);
    

private:


};

#endif // SNAKE_H