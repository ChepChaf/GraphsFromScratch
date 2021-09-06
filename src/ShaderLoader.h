//
// Created by chep on 4/9/21.
//

#pragma once

#include <memory>
#include <vector>
#include <string>
#include <sol/sol.hpp>

#include "RenderingAlgorithm.h"

class ShaderLoader
{
    static std::unique_ptr<sol::state> lua;
public:
    static void init();
    static std::vector<std::string> availableShaders();
    static RenderingAlgorithm* loadShader(std::string shaderPath);
};

