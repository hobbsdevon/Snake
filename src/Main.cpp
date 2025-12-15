//g++ src/main.cpp src/Stage.cpp src/Snake.cpp src/Food.cpp -o main.exe -Iinclude -Llib -lSDL3
#include <SDL3/SDL.h>
#include "Food.h"
#include "Stage.h"
#include "Snake.h"

int main(){
    Stage* stage = new Stage();    
    stage -> generateStage();

    return 0;
}