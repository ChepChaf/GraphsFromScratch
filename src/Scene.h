//
// Created by chep on 1/9/21.
//

#pragma once

#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <vector>

#include "Object.h"

struct Scene
{
    glm::vec3 cameraOrigin;
    glm::vec2 canvasSize;
    float projectionPlaneDistance;
    float tMin;
    float tMax;

    std::vector<Object*> objects;

    glm::vec3 canvasToViewPort(int i, int i1, int i2, int i3);
};

