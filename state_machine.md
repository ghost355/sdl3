# How to use State Macine in a game with C

``` c
// Structure with state's functions

typedef struct
{
    void (*enter)(void);
    void (*handle_input)(void);
    void (*update)(void);
    void (*render)(void);
    void (*exit)(void);
} State;

// state's functions declarations
void menu_enter();
void menu_handle_input();
void menu_update();
void menu_render();
void menu_exit();

void game_menu_enter();
void game_handle_input();
void game_update();
void game_render();
void game_exit();

void pause_enter();
void pause_handle_input();
void pause_update();
void pause_render();
void pause_exit();

// state's variables
State menu_state = { .enter        = menu_enter,
                     .handle_input = menu_handle_input,
                     .update       = menu_update,
                     .render       = menu_render,
                     .exit         = menu_exit };

State game_state = { .enter        = game_menu_enter,
                     .handle_input = game_handle_input,
                     .update       = game_update,
                     .render       = game_render,
                     .exit         = game_exit };

State pause_state = { .enter        = pause_enter,
                      .handle_input = pause_handle_input,
                      .update       = pause_update,
                      .render       = pause_render,
                      .exit         = pause_exit };

// states functions for change to next state
State*get_next_state(State* current_state)
{
    if (current_state == &menu_state) {
        return &game_state;
    }
    else if (current_state == &game_state) {
        return &pause_state;
    }
    else {
        return &menu_state;
    }
}

// How to use State Machine in Game Loop

void run_game_loop(State*initial_state)
{
    State* current_state = initial_state;

    while (1) {
        current_state->handle_input();
        current_state->update();
        current_state->render();

        current_state = get_next_state(current_state);
    }
}

int main()
{
    run_game_loop(&menu_state);
    return 0;
}
```
