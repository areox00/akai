#include "box.hpp"

void Box::set_direction(Direction direction)
{
    m_direction = direction;
}

void Box::push_widget(Widget *widget)
{
    m_widgets.emplace_back(widget);
}

void Box::draw(SDL_Renderer *renderer)
{
    
}