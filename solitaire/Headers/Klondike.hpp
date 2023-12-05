/* Copyright 2023 by Jonathan Kang */
#pragma once
#include "Foundation.hpp"
#include "Stock.hpp"
#include "Tableau.hpp"
#include <SFML/Graphics.hpp>

namespace Solitaire {
    class Klondike : public sf::Drawable {
     public:
        Klondike();
        Klondike(unsigned int seed);
     protected:
        void draw(sf::RenderTarget&, sf::RenderStates) const override;
     private:
        Foundation foundation;
        Stock stock;
        Tableau tableau;
    };
}
