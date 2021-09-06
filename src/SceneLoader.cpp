//
// Created by chep on 2/9/21.
//

#include "SceneLoader.h"
#include "Sphere.h"
#include "FileUtils.h"

#include <algorithm>
#include <yaml-cpp/yaml.h>
#include <filesystem>

namespace fs = std::filesystem;

const std::string path = "./resources/scenes";

Scene *SceneLoader::loadScene(const std::string &sceneFile)
{
    auto files = availableScenes();

    if (std::find(files.begin(), files.end(), sceneFile) != files.end())
    {
        Scene *scene = new Scene();

        YAML::Node sceneConfig = YAML::LoadFile(sceneFile);

        // Camera
        scene->cameraOrigin.x = sceneConfig["camera"]["position"]["x"].as<float>();
        scene->cameraOrigin.y = sceneConfig["camera"]["position"]["y"].as<float>();
        scene->cameraOrigin.z = sceneConfig["camera"]["position"]["z"].as<float>();

        // Canvas
        scene->canvasSize.x = sceneConfig["canvas"]["size"]["width"].as<float>();
        scene->canvasSize.y = sceneConfig["canvas"]["size"]["height"].as<float>();

        // Projection plane
        scene->projectionPlaneDistance = sceneConfig["projection_plane_distance"].as<float>();

        auto objectsNode = sceneConfig["objects"];

        std::vector<Sphere> objects;
        for (auto&& it : objectsNode)
        {
            auto object = parseObject(it.second);
            objects.push_back(*object);
        }

        scene->objects = objects;

        return scene;
    }

    return nullptr;
}

std::vector<std::string> SceneLoader::availableScenes()
{
    auto files = FileUtils::getFilesIn(path, ".scene");

    return files;
}

Sphere *SceneLoader::parseObject(YAML::Node value)
{
    auto type = value["type"].as<std::string>();

    if (type == "Sphere")
    {
        return new Sphere(
                    {value["center"]["x"].as<float>(),
                            value["center"]["y"].as<float>(),
                            value["center"]["z"].as<float>()
                      },
                    value["radius"].as<float>(),
                    {value["color"]["r"].as<unsigned char>(),
                          value["color"]["g"].as<unsigned char>(),
                          value["color"]["b"].as<unsigned char>()}
                );
    }

    return nullptr;
}
