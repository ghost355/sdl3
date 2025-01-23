#ifndef EVENT_H
#define EVENT_H
#include <SDL3/SDL.h>

SDL_AppResult event_handle(void* appstate, SDL_Event* event);
#endif
