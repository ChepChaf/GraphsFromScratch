//
// Created by chep on 1/9/21.
//

#pragma once


#include <tuple>

#include "Color.h"

class Object
{
    public:
        virtual std::tuple<float, float> intersectRay(glm::vec3, glm::vec3) = 0;

        Color color;
    protected:
        Object(Color color) : color(color) {}
};

