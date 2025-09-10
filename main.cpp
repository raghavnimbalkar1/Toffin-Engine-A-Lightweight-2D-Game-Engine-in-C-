#include <SFML/Graphics.hpp>
#include <vector>
#include "objects/GameObject.h"
#include "physics/Physics.h"

int main() {
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Toffin Engine");
    window.setFramerateLimit(60);

    // clock to measure the time between frames (delta time)
    sf::Clock clock;

    Physics physics;

    std::vector<GameObject> gameObjects;

    // objects to test physics
    gameObjects.emplace_back(GameObject(Vector2D(100.0f, 100.0f), sf::Vector2f(50.0f, 50.0f)));
    gameObjects.emplace_back(GameObject(Vector2D(300.0f, 50.0f), sf::Vector2f(80.0f, 80.0f)));
    
    gameObjects[1].velocity = Vector2D(150.0f, 50.0f);

    while (window.isOpen()) {
        float dt = clock.restart().asSeconds();

        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        physics.update(gameObjects, dt); 
        
        for (auto& obj : gameObjects) {
            obj.update(dt); 
        }

        window.clear(sf::Color(20, 20, 40));
        
        for (auto& obj : gameObjects) {
            obj.draw(window);
        }
        
        window.display();
    }

    return 0;
}
