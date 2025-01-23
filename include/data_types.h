#ifndef DATA_TYPES_H
#define DATA_TYPES_H
#include <SDL3/SDL.h>

typedef struct AppData
{
    SDL_Window*   window;
    SDL_Renderer* renderer;
    int           score;
} AppData;

#endif
