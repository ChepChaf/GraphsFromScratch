//
// Created by chep on 1/9/21.
//

#include "RaytracingAlgorithm.h"

Color RaytracingAlgorithm::render(const Scene &scene, glm::vec3 D)
{
    float closest_t = std::numeric_limits<float>::max();

    Object* closest_object = nullptr;

    for (auto object : scene.objects)
    {
        auto [t1, t2] = object->intersectRay(scene.cameraOrigin, D);

        if (t1 > scene.tMin && t1 < scene.tMax && t1 < closest_t)
        {
            closest_t = t1;
            closest_object = object;
        }

        if (t2 > scene.tMin && t2 < scene.tMax && t2 < closest_t)
        {
            closest_t = t2;
            closest_object = object;
        }
    }

    if (closest_object == nullptr)
    {
        return { 255, 255, 255};
    }

    return closest_object->color;
}
