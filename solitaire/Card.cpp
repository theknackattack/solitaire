/* Copyright 2023 by Jonathan Kang */
#include "Headers/Card.hpp"
#include "Headers/Cache.hpp"
#include <exception>
#include <iostream>
#include <sstream>
#include <string>

#define SPRITE_TYPE 2

namespace Solitaire {
    Card::Card(Suit suit, int rank) : suit(suit), rank(rank) {
        std::string suitString, rankString;
        if (suit < CLUB || suit > SPADE) {
            throw std::invalid_argument("Not a valid suit type.");
        }
        else {
            switch (suit) {
                case CLUB:
                    suitString = "Clubs";
                    break;
                case DIAMOND:
                    suitString = "Diamond";
                    break;
                case HEART:
                    suitString = "Hearts";
                    break;
                case SPADE:
                    suitString = "Spades";
                    break;
                default:
                    throw std::out_of_range("Never reach over here.");
                    break;
            }
        }

        if (rank < 1 || rank > 13) {
            throw std::out_of_range("Specified rank is out of range.");
        }
        else {

            rankString = std::to_string(rank);
            // switch (rank) {
            //     case 1:
            //         rankString = "ace";
            //         break;
            //     case 11:
            //         rankString = "jack";
            //         break;
            //     case 12:
            //         rankString = "queen";
            //         break;
            //     case 13:
            //         rankString = "king";
            //         break;
            //     default:
            //         rankString = std::to_string(rank);
            //         break;
            // }
        }

        std::stringstream fileName;
        fileName << "Sprites/Type B/" << suitString << " " << rankString << ".png";
        //fileName << "Images/" << rankString << "_of_" << suitString << ".png";
        texture = Cache::getCache().getImage(fileName.str());
    }

    Color Card::getColor() {
        switch (suit) {
            case CLUB:
            case SPADE:
                return BLACK;
            case DIAMOND:
            case HEART:
                return RED;
            default:
                throw std::logic_error("Invalid card suit for obtaining color.");
                break;
        }
    }

    void Card::draw(sf::RenderTarget& target, sf::RenderStates states) const {
        sf::Sprite sprite;
        sprite.setTexture(*texture);
        sprite.scale({1.25, 1.25});
        target.draw(sprite, states);
        
    }
}
