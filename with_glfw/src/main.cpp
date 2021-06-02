
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "graphics.h"
#include "game_math.h"

using namespace GameMath;

int main()
{
    Graphics::init();

    // Main loop
    while(!Graphics::wants_to_close())
    {
        Graphics::clear_frame(v4(0.0f, 0.0f, 0.05f, 1.0f));

        Graphics::quad(Graphics::mouse_world_position(), v2(1.0f, 1.0f), 0.0f, v4(1.0f, 1.0f, 1.0f, 1.0f));

        Graphics::render();

        Graphics::swap_frames();
    }

    Graphics::uninit();

    return 0;
}
