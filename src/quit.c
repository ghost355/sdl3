#include "../include/quit.h"

#include <stdlib.h>

#include "../include/data_types.h"

void quit(void* appstate, SDL_AppResult result) {
  AppData* app_data = appstate;
  SDL_DestroyRenderer(app_data->renderer);
  SDL_DestroyWindow(app_data->window);
  free(app_data);
}
