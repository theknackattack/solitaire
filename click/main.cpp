#include <iostream>
#include <SFML/Graphics.hpp>

int main(int argc, const char* argv[]) {
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Solitaire Card Test");

    

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            window.clear(sf::Color(0, 100, 62));
            window.display();
        }
    }

    return 0;
}