#pragma once

#include <vector>
#include <SDL2/SDL.h>
#include "widget.hpp"

struct SDL_Renderer;

enum class Direction {
    row, column
};

enum class Align {
    left, right, center
};

class Box : public Widget {
private:
    std::vector<Widget *> m_widgets;
    Direction m_direction;
public:
    void set_direction(Direction direction);
    void push_widget(Widget *widget);
    void draw(SDL_Renderer *renderer);
};