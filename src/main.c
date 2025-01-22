#include "SDL3/SDL_mutex.h"
#define SDL_MAIN_USE_CALLBACKS 1
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <stdlib.h>

typedef struct AppData {
  SDL_Window* window;
  SDL_Renderer* renderer;
} AppData;

SDL_AppResult SDL_AppInit(void** appstate, int argc, char* argv[]) {
  *appstate = (AppData*)malloc(sizeof(AppData));
  if (appstate == NULL) return SDL_APP_FAILURE;
  return SDL_APP_CONTINUE;
}
