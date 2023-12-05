/* Copyright 2023 by Jonathan Kang */
#include "Headers/Klondike.hpp"
#include <chrono>
#include <random>

namespace Solitaire {
    Klondike::Klondike() : Klondike(std::chrono::system_clock::now().time_since_epoch().count()) {
        /* Calling the second default constructor */
    }

    Klondike::Klondike(unsigned int seed) {
        std::deque<Card> deal;
        for (int i = 0; i < 4; i++) {
            for (int j = 1; j < 14; j++) {
                deal.push_back(Card((Suit)i, j));
            }
        }

        std::mt19937 gen(seed);
        std::shuffle(deal.begin(), deal.end(), gen);

        
    }
    void Klondike::draw(sf::RenderTarget& target, sf::RenderStates states) const {
        target.draw(tableau, states);
        // klondike tells tableau to draw to window
        // main draws klondike
        // tableau draws cards
        
    }
}
