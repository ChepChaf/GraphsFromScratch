//
// Created by chep on 1/9/21.
//

#include <glm/glm.hpp>

#include "Sphere.h"

std::tuple<float, float> Sphere::intersectRay(glm::vec3 origin, glm::vec3 direction)
{
    auto CO = origin - center;

    float a = glm::dot(direction, direction);
    float b = 2 * glm::dot(CO, direction);
    float c = dot(CO, CO) - radius * radius;

    float discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        return std::make_tuple<float, float>(std::numeric_limits<float>::infinity(),
                                             std::numeric_limits<float>::infinity());
    }

    float t1 = (-b + glm::sqrt(discriminant)) / (2*a);
    float t2 = (-b - glm::sqrt(discriminant)) / (2*a);

    return std::make_tuple(t1, t2);
}
