#include "app.hpp"

int main(int argc, char **args)
{
    SDL_Init(SDL_INIT_VIDEO);

    App app;
    app.run();

    return 0;
}