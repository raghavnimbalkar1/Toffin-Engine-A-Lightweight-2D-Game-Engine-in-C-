#include "Vector2D.h"

Vector2D::Vector2D() : x(0.0f), y(0.0f) {}

Vector2D::Vector2D(float x, float y) : x(x), y(y) {}


Vector2D& Vector2D::add(const Vector2D& vec) {
    this->x += vec.x;
    this->y += vec.y;
    return *this;
}

Vector2D& Vector2D::subtract(const Vector2D& vec) {
    this->x -= vec.x;
    this->y -= vec.y;
    return *this;
}

Vector2D operator+(Vector2D v1, const Vector2D& v2) {
    return v1.add(v2);
}

Vector2D operator-(Vector2D v1, const Vector2D& v2) {
    return v1.subtract(v2);
}

Vector2D& Vector2D::operator+=(const Vector2D& vec) {
    return this->add(vec);
}

Vector2D& Vector2D::operator-=(const Vector2D& vec) {
    return this->subtract(vec);
}

Vector2D Vector2D::operator*(const float scalar) const {
    return Vector2D(this->x * scalar, this->y * scalar);
}
