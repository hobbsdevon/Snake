#ifndef SNAKE_H
#define SNAKE_H
#include <SDL3/SDL.h>

class Snake {
public:
    Snake(float x, float y);
    void handleInput(SDL_Keycode key);
    void render(SDL_Renderer* renderer) const;

private:
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    SDL_FRect rect;
};

#endif // SNAKE_H