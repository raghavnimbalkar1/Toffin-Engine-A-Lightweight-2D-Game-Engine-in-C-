#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(1280, 720), "My C++ Game Engine");
    window.setFramerateLimit(60);
  
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color(20, 20, 40));
        window.display();
    }
    return 0;
}
