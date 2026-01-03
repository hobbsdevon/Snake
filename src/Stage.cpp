#include "Stage.h"

Stage::Stage(int width, int height)
    : width(width), height(height)
{
}

void Stage::render(SDL_Renderer* renderer) const
{
    SDL_SetRenderDrawColor(renderer, 60, 60, 60, 255);

    // Vertical lines
    for (int x = 0; x <= width; x += 50) {
        SDL_RenderLine(renderer, (float)x, 0.0f, (float)x, (float)height);
    }

    // Horizontal lines
    for (int y = 0; y <= height; y += 50) {
        SDL_RenderLine(renderer, 0.0f, (float)y, (float)width, (float)y);
    }
}
