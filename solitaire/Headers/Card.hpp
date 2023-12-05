/* Copyright 2023 by Jonathan Kang */
#pragma once
#include <SFML/Graphics.hpp>
#include <memory>

namespace Solitaire {
    enum Suit { CLUB, DIAMOND, HEART, SPADE };
    enum Color { RED, BLACK };

    class Card : public sf::Drawable {
     public:
        Card(Suit suit, int rank);
        Suit getSuit() { return suit; }
        int getRank() { return rank; }
        Color getColor();
     protected:
        void draw(sf::RenderTarget&, sf::RenderStates) const override;
     private:
        Suit suit;
        int rank;
        std::shared_ptr<sf::Texture> texture;
    };
}
