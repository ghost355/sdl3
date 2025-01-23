#include "../include/event.h"

// #include "../include/data_types.h"

SDL_AppResult event_handle(void* appstate, SDL_Event* event)
{
    // AppData* app_data = appstate;
    if (event->type == SDL_EVENT_QUIT) {
        return SDL_APP_FAILURE;
    }

    return SDL_APP_CONTINUE;
}
