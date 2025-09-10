#pragma once
#include "../objects/GameObject.h"
#include <vector>

class Physics {
public:
    void update(std::vector<GameObject>& objects, float dt);
};
