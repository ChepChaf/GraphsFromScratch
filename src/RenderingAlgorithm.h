//
// Created by chep on 1/9/21.
//

#pragma once


#include "Color.h"
#include "Scene.h"

class RenderingAlgorithm
{
    public:
    virtual Color render(const Scene &scene, glm::vec3 D) = 0;
};

