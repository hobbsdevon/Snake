#include "Stage.h"
#include <iostream>
using namespace std;

void Stage::generateStage() {
    const int WINDOW_WIDTH = 800.0f;
    const int WINDOW_HEIGHT = 800.0f;
    const float RECT_WIDTH = 50.0f;
    const float RECT_HEIGHT = 50.0f;
    
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Snake", WINDOW_WIDTH, WINDOW_HEIGHT, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);

    for(float x; x < WINDOW_WIDTH; x += RECT_WIDTH){
        for(float y = 0; y < WINDOW_HEIGHT; y += RECT_HEIGHT){
            SDL_FRect rect = {x, y, RECT_WIDTH, RECT_HEIGHT}; //x, y, w, h
            SDL_SetRenderDrawColor(renderer, 128, 128, 128, 255); //r, g, b, a
            SDL_RenderRect(renderer, &rect);
        }
    }

    SDL_RenderPresent(renderer);    
    
    SDL_Event event;
    //Loop to handle events
    bool running = true;
    while(running){
        //Event logic
        while(SDL_PollEvent(&event)){
            if(event.type == SDL_EVENT_QUIT){ //Close window by clicking top right X
                running = false;
            }
        }
        //Game logic
    }
    SDL_Quit();
}