#include "../include/quit.h"
#include "../include/data_types.h"
#include <stdlib.h>

void quit(void* appstate, SDL_AppResult result)
{

    AppData* app_data = appstate;
    free(app_data);
    SDL_DestroyRenderer(app_data->renderer);
    SDL_DestroyWindow(app_data->window);
}
