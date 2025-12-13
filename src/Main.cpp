//g++ src/main.cpp -o main.exe -Iinclude -Llib -lSDL3
#include <SDL3/SDL.h>
#include "Food.h"
#include "Stage.h"
#include "Snake.h"

int main(){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Snake", 800, 600, SDL_WINDOW_RESIZABLE);

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
    return 0;
}