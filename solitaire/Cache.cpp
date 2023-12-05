/* Copyright 2023 by Jonathan Kang */
#include "Headers/Cache.hpp"

namespace Solitaire {
    std::shared_ptr<sf::Texture> Cache::getImage(const std::string& fileName) {
        std::weak_ptr<sf::Texture> wp = cache[fileName];
        std::shared_ptr<sf::Texture> sp;
        if (wp.expired()) {
            sp = std::make_shared<sf::Texture>();
            sp->loadFromFile(fileName);
            cache[fileName] = sp;
        }
        else {
            sp = wp.lock();
        }
        return sp;
    }
}
