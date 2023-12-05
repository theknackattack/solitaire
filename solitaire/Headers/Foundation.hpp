/* Copyright 2023 by Jonathan Kang */
#pragma once
#include <SFML/Graphics.hpp>

namespace Solitaire {
    class Foundation : sf::Drawable {
     public:
     protected:
        void draw(sf::RenderTarget&, sf::RenderStates) const override;
     private:
    };
}
