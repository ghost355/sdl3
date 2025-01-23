#include "SDL3/SDL_init.h"
#define SDL_MAIN_USE_CALLBACKS 1
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include "../include/event.h"
#include "../include/init.h"
#include "../include/quit.h"
#include "../include/render.h"

SDL_AppResult SDL_AppInit(void** appstate, int argc, char* argv[])
{
    return init(appstate, argc, argv);
}

SDL_AppResult SDL_AppEvent(void* appstate, SDL_Event* event)
{
    return event_handle(appstate, event);
}

SDL_AppResult SDL_AppIterate(void* appstate) { return render(appstate); }

void SDL_AppQuit(void* appstate, SDL_AppResult result)
{
    quit(appstate, result);
}
