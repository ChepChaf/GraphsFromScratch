//
// Created by chep on 1/9/21.
//

#include "RenderingAlgorithm.h"

std::vector<Color> RenderingAlgorithm::render(const Scene scene, int width, int height)
{
    return _render_fun(scene, width, height);
}

void RenderingAlgorithm::setRender(std::function<std::vector<Color>(const Scene, int width, int height)> fun)
{
    _render_fun = fun;
}
