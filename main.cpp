
#include "graphics.h"

int main(int argc, char* argv[])
{
    init_graphics();

    bool game_running = true;
    while(game_running)
    {
        platform_events();

        if(!window_open())
        {
            game_running = false;
            break;
        }

        render();
    }

    shutdown_graphics();
}

