#pragma once

#include "graphics.hpp"

class MouseCursor {
   public:
    MouseCursor(PixelWriter* writer, PixcelColor erase_color,
                Vector2D<int> initial_position);
    void MoveRelative(Vector2D<int> displacement);

   private:
    PixelWriter* pixel_writer_ = nullptr;
    PixcelColor erase_color_;
    Vector2D<int> position_;
};