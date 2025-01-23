#include "../include/render.h"
#include "../include/data_types.h"

SDL_AppResult render(void* appstate)
{
    AppData* app_data = appstate;
    SDL_SetRenderDrawColor(app_data->renderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderClear(app_data->renderer);
    SDL_RenderPresent(app_data->renderer);
    return SDL_APP_CONTINUE;
}
