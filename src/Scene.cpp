//
// Created by chep on 1/9/21.
//

#include "Scene.h"

glm::vec3 Scene::canvasToViewPort(int x, int y, int width, int height)
{
    float _x = static_cast<float>(x) * canvasSize.x/static_cast<float>(width);
    float _y =static_cast<float>(y) * canvasSize.y/static_cast<float>(height);

    tMin = 1;
    tMax = std::numeric_limits<float>::max();

    return glm::vec3{_x, _y,projectionPlaneDistance};
}
