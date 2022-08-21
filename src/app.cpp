#include "app.hpp"

App::App()
{
    m_window = SDL_CreateWindow(
        "akai",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        1280,
        720,
        SDL_WINDOW_RESIZABLE | SDL_WINDOW_ALLOW_HIGHDPI);
    if (!m_window) {
        fprintf(stderr, "error %s\n", SDL_GetError());
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Error", SDL_GetError(), NULL);
    }

    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
    if (!m_renderer) {
        fprintf(stderr, "error %s\n", SDL_GetError());
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "Error", SDL_GetError(), NULL);
    }
}

App::~App()
{

}

static bool running = true;

void App::run()
{
    while (running) {
        poll_event();
        update();
        draw();
    }
}

void App::poll_event()
{
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            running = false;
        }
    }
}

void App::update()
{
    
}

void App::draw()
{
    SDL_RenderClear(m_renderer);

    SDL_RenderPresent(m_renderer);
}
