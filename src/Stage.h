#ifndef STAGE_H
#define STAGE_H
#include <SDL3/SDL.h>

class Stage
{
public:
    Stage(int width, int height);

    void render(SDL_Renderer* renderer) const;

private:
    int width;
    int height;
};

#endif // STAGE_H