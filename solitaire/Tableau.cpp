/* Copyright 2023 by Jonathan Kang */
#include "Headers/Tableau.hpp"
#include <algorithm>
#include <chrono>
#include <random>

namespace Solitaire {
    Tableau::Tableau() {
        
        
        
        
        int pile = 1;
        for (int i = 0; i < 7; i++) {
            tableau.push_back(std::vector<Card>());
            for (int j = 0; j < pile; j++) {
                tableau.back().push_back(deal.front());
                deal.pop_front();
            }
            pile++;
        }
    }

    void Tableau::draw(sf::RenderTarget& target, sf::RenderStates states) const {
        states.transform.translate({-25, 250});
        float dx = 150;
        float dy = 35;
        for (size_t i = 0; i < tableau.size(); i++) {
            states.transform.translate({dx, 0});
            sf::RenderStates clones = states;
            for (size_t j = 0; j < tableau[i].size(); j++) {
                target.draw(tableau[i][j], clones);
                clones.transform.translate({0, dy});
            }
        }
    }
}
