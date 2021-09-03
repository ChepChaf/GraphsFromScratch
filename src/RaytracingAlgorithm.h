//
// Created by chep on 1/9/21.
//

#pragma once


#include "RenderingAlgorithm.h"

class RaytracingAlgorithm : public RenderingAlgorithm
{
public:
    Color render(const Scene &scene, glm::vec3 D) override;
};

