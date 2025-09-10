#include "Physics.h"

void Physics::update(std::vector<GameObject>& objects, float dt) {

    const Vector2D gravity(0.0f, 980.0f);

    // Screen boundaries
    const float screenWidth = 1280.0f;
    const float screenHeight = 720.0f;

    for (auto& obj : objects) {

        obj.velocity += gravity * dt;
        obj.position += obj.velocity * dt;

        sf::Vector2f size = obj.shape.getSize();
        
        // Right edge
        if (obj.position.x + size.x > screenWidth) {
            obj.position.x = screenWidth - size.x; 
            obj.velocity.x *= -0.8f; 
        }
        // Left edge
        if (obj.position.x < 0) {
            obj.position.x = 0;
            obj.velocity.x *= -0.8f;
        }
        // Bottom edge
        if (obj.position.y + size.y > screenHeight) {
            obj.position.y = screenHeight - size.y;
            obj.velocity.y *= -0.8f;
        }
        // Top edge
        if (obj.position.y < 0) {
            obj.position.y = 0;
            obj.velocity.y *= -0.8f;
        }
    }
}
