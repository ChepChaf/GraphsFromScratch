//
// Created by chep on 1/9/21.
//

#pragma once


#include <glm/vec3.hpp>
#include "Object.h"
#include "Color.h"

class Sphere : public Object
{
public:
    float radius = 0.0f;
    glm::vec3 center = { 0.0f, 0.0f, 0.0f };

    Sphere(
            glm::vec3 center = {0.0f, 0.0f, 0.0f},
            float radius = 0.0f,
            Color color = { 0, 0, 0 }) : center(center), radius(radius), Object(color) {}
    std::tuple<float, float> intersectRay(glm::vec3 origin, glm::vec3 direction) override;
};

