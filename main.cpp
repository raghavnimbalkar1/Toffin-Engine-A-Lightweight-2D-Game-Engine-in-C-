#include <SFML/Graphics.hpp>
#include "objects/GameObject.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Toffin Engine");
    window.setFramerateLimit(60);

    GameObject player(Vector2D(600.0f, 300.0f), sf::Vector2f(50.0f, 50.0f));


    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        player.update(0.0f);

        window.clear(sf::Color(20, 20, 40));
        player.draw(window);

        window.display();
    }

    return 0;
}

