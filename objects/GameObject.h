#pragma once
#include <SFML/Graphics.hpp>
#include "../math/Vector2D.h"

class GameObject {
public:
    Vector2D position;
    Vector2D velocity;
    sf::RectangleShape shape;

    // Constructor
    GameObject(Vector2D pos, sf::Vector2f size);

    void update(float dt);
    void draw(sf::RenderWindow& window);
};
