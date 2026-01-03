//g++ src/main.cpp src/Stage.cpp src/Snake.cpp src/Food.cpp -o main.exe -Iinclude -Llib -lSDL3
#include <SDL3/SDL.h>
#include "Food.h"
#include "Stage.h"
#include "Snake.h"

int main(){

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Snake", 800, 800, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);

    Stage* stage = new Stage(800, 800); 
    Snake* snake = new Snake(0, 0);
    
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
            else if(event.type == SDL_EVENT_KEY_DOWN){
                snake->handleInput(event.key.key);
            }
        }
        SDL_SetRenderDrawColor(renderer, 30, 30, 30, 255);
        SDL_RenderClear(renderer);

        stage->render(renderer);

        SDL_SetRenderDrawColor(renderer, 0, 200, 255, 255);
        snake->render(renderer);

        SDL_RenderPresent(renderer);
        SDL_Delay(16);
        
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}