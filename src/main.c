#define SDL_MAIN_USE_CALLBACKS 1
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>
#include <stdlib.h>

// ======= DEFINE CONSTANTS SECTION ==========
#define screen_width 1280
#define screen_height 720

// ======== STRUCTURES SECTION =========
typedef struct AppData {
  SDL_Window* window;
  SDL_Renderer* renderer;
} AppData;

// ========= SDL's MANDATORY SECTIO ===========
SDL_AppResult SDL_AppInit(void** appstate, int argc, char* argv[]) {
  // тут мы резервируем место под струтуру AppData в куче
  // получаем указатель на нее
  // appstate - это указатель на указатель на данные используемые для обмена
  // просто указатель помогает менять данные в самой струтуре
  // указатель на указатель помогает изменить переданный в функцию указатель и
  // теперь существующий где то указатель appstate указывает уже на новую нашу
  // струтуру AppData

  AppData* ad = malloc(sizeof(AppData));
  if (appstate == NULL) return SDL_APP_FAILURE;

  ad->window =
      SDL_CreateWindow("SDL3 Application", screen_width, screen_height, 0);
  ad->renderer = SDL_CreateRenderer(ad->window, 0);

  *appstate = ad;
  return SDL_APP_CONTINUE;
}
