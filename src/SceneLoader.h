//
// Created by chep on 2/9/21.
//

#pragma once


#include <string>
#include <yaml-cpp/node/detail/iterator.h>
#include "Scene.h"

class SceneLoader
{
public:
    static Scene *loadScene(const std::string& sceneFile);
    static std::vector<std::string> availableScenes();

    static Object *parseObject(YAML::Node node1);
};

