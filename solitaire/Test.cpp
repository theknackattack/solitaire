#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Klondike and Card Test
#include <boost/test/unit_test.hpp>
#include "Headers/Card.hpp"
#include "Headers/Cache.hpp"

using namespace Solitaire;

/* Card class */

BOOST_AUTO_TEST_CASE(testCardColor) {
    Card spadeOf5(Solitaire::SPADE, 5);
    BOOST_REQUIRE_EQUAL(spadeOf5.getColor(), Solitaire::BLACK);
}

/* Cache class */

BOOST_AUTO_TEST_CASE(testCacheSameImage) {
    Cache cache;
    auto image = cache.getImage("Images/2_of_clubs.png");
    auto image2 = cache.getImage("Images/2_of_clubs.png");
    BOOST_REQUIRE_EQUAL(image, image2);
}

BOOST_AUTO_TEST_CASE(testCacheDifferentImage) {
    Cache cache;
    auto image = cache.getImage("Images/2_of_clubs.png");
    auto image2 = cache.getImage("Images/3_of_clubs.png");
    BOOST_REQUIRE_NE(image, image2);
}

BOOST_AUTO_TEST_CASE(testCacheWeakPointer) {
    Cache cache;
    auto image = cache.getImage("Images/2_of_clubs.png");
    sf::Texture* ptr = image.get(); // really dangerous because it's a raw pointer - can become invalid at any time
    image.reset(); // resetting the image, therefore making the pointer a null pointer
    auto image2 = cache.getImage("Images/2_of_clubs.png");
    BOOST_REQUIRE_NE(ptr, image2.get());
}
