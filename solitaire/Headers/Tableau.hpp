/* Copyright 2023 by Jonathan Kang */
#pragma once
#include "Card.hpp"
#include <SFML/Graphics.hpp>
#include <deque>
#include <stack>
#include <vector>

namespace Solitaire {
    class Tableau : public sf::Drawable {
     public:
        Tableau();
     protected:
        void draw(sf::RenderTarget&, sf::RenderStates) const override;
     private:
        std::vector<std::vector<Card>> tableau;
    };
}
