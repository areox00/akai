#pragma once

#include <SDL2/SDL.h>

class App {
private:
    SDL_Window *m_window;
    SDL_Renderer *m_renderer;

    void poll_event();
    void update();
    void draw();
public:
    App();
    ~App();

    void run();
};