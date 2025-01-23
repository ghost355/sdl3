#include "../include/init.h"
#include "../include/config.h"
#include "../include/data_types.h"
#include <stdlib.h>

SDL_AppResult init(void** appstate, int argc, char* argv[])
{

    AppData* app_data = malloc(sizeof(AppData));
    if (appstate == NULL) {
        return SDL_APP_FAILURE;
    }

    // initialize()

    app_data->window
      = SDL_CreateWindow("SDL3 Application", screen_width, screen_height, 0);
    app_data->renderer = SDL_CreateRenderer(app_data->window, 0);

    app_data->score = 0;

    *appstate = app_data;
    return SDL_APP_CONTINUE;
}
