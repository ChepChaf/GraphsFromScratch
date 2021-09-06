//
// Created by chep on 1/9/21.
//

#pragma once


#include <functional>
#include "Color.h"
#include "Scene.h"

class RenderingAlgorithm
{
    std::function<std::vector<Color>(const Scene, int width, int height)> _render_fun;

    public:
    std::vector<Color> render(const Scene scene, int width, int height);
    void setRender(std::function<std::vector<Color>(const Scene, int width, int height)>);
};

