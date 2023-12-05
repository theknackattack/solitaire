/* Copyright 2023 by Jonathan Kang */
#pragma once
#include "Card.hpp"
#include <SFML/Graphics.hpp>
#include <vector>

namespace Solitaire {
    class Stock : public sf::Drawable {
     public:
     protected:
        void draw(sf::RenderTarget&, sf::RenderStates) const override;
     private:
        std::vector<Card> stock;
    };
}
