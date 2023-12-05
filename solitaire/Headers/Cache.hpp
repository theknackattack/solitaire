#pragma once
#include <SFML/Graphics.hpp>
#include <memory>
#include <string>
#include <unordered_map>

namespace Solitaire {
    class Cache {
     public:
        std::shared_ptr<sf::Texture> getImage(const std::string& fileName);
        static Cache& getCache() {
            static Cache singleton;
            return singleton;
        }
     private:
        std::unordered_map<std::string, std::weak_ptr<sf::Texture>> cache;
    };
}


