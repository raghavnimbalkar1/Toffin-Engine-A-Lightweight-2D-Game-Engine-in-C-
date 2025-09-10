#include "GameObject.h"

GameObject::GameObject(Vector2D pos, sf::Vector2f size) {
    this->position = pos;
    this->velocity = Vector2D(0.0f, 0.0f);

    this->shape.setSize(size);
    this->shape.setPosition(this->position.x, this->position.y);
    this->shape.setFillColor(sf::Color::White);
}

void GameObject::update(float dt) {

    this->shape.setPosition(this->position.x, this->position.y);
}

void GameObject::draw(sf::RenderWindow& window) {
    window.draw(this->shape);
}

