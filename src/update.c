#include "../include/update.h"
#include "../include/data_types.h"

void update(void* appstate)
{
    AppData* app_data = appstate;
    app_data->score++;
}
