/* Copyright 2023 by Jonathan Kang */
#include "Headers/Klondike.hpp"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>

int main(int argc, const char* argv[]) {
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Solitaire");

    Solitaire::Klondike Game;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            window.clear(sf::Color(0, 100, 62));
            window.draw(Game);
            window.display();
        }
    }
    return 0;
}
