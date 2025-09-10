#pragma once
#include <cmath>

struct Vector2D {
    float x = 0.0f;
    float y = 0.0f;

    Vector2D();
    Vector2D(float x, float y);

    Vector2D& add(const Vector2D& vec);
    Vector2D& subtract(const Vector2D& vec);
    
    friend Vector2D operator+(Vector2D v1, const Vector2D& v2);
    friend Vector2D operator-(Vector2D v1, const Vector2D& v2);

    Vector2D& operator+=(const Vector2D& vec);
    Vector2D& operator-=(const Vector2D& vec);

    // Scalar multiplication
    Vector2D operator*(const float scalar) const;
};

