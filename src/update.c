#include "../include/update.h"

#include "../include/data_types.h"

SDL_AppResult update(void* appstate) {
  AppData* app_data = appstate;
  app_data->score++;
  return SDL_APP_CONTINUE;
}
