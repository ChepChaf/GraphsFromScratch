//
// Created by chep on 4/9/21.
//

#include "ShaderLoader.h"
#include "FileUtils.h"
#include "Sphere.h"


#define SOL_CHECK_ARGUMENTS
#include <sol/sol.hpp>


std::vector<std::string> ShaderLoader::availableShaders()
{
    return FileUtils::getFilesIn("./resources/algorithms", ".shader");
}

RenderingAlgorithm *ShaderLoader::loadShader(const std::string shaderFile)
{
    auto files = availableShaders();

    if (std::find(files.begin(), files.end(), shaderFile) != files.end())
    {
        lua->script_file(shaderFile);

        auto algorithm = new RenderingAlgorithm();

        sol::function fx = (*lua)["render"];
        algorithm->setRender(std::move(fx));

        return algorithm;
    }
    return nullptr;
}

std::unique_ptr<sol::state> ShaderLoader::lua = nullptr;
void ShaderLoader::init()
{
    ShaderLoader::lua = std::make_unique<sol::state>();

    lua->open_libraries(sol::lib::base, sol::lib::table);

    lua->new_usertype<Color>(
            "color", sol::constructors<Color(unsigned char, unsigned char, unsigned char)>(),
                    "r", &Color::r, "g", &Color::g, "b", &Color::b);
    auto scene = lua->new_usertype<Scene>(
            "scene"
            );
    scene["cameraOrigin"] = &Scene::cameraOrigin;
    scene["canvasSize"] = &Scene::canvasSize;
    scene["projectionPlaneDistance"] = &Scene::projectionPlaneDistance;
    scene["tMin"] = &Scene::tMin;
    scene["tMax"] = &Scene::tMax;
    scene["objects"] = &Scene::objects;

    lua->new_usertype<Object>("object", "color", &Object::color);
    auto sphere = lua->new_usertype<Sphere>("sphere",
                                            "intersectRay", &Sphere::intersectRay,
                                            sol::base_classes, sol::bases<Object>());
    sphere["radius"] = &Sphere::radius;
    sphere["center"] = &Sphere::center;
    sphere["color"] = &Sphere::color;

    lua->new_usertype<glm::vec3>("vec3", sol::constructors<glm::vec3(float, float, float)>());
}