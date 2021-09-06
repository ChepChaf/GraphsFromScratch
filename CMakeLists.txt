cmake_minimum_required(VERSION 3.20)
project(GraphicsFromScratchQT)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH  "/home/chep/Apps/QT/6.1.2/gcc_64/lib/cmake")

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(yaml-cpp)
find_package(glm REQUIRED)
find_package(lua REQUIRED)
find_package(sol2 REQUIRED)

set(LUA_BUILD_AS_DLL 1)
set(SOL_ALL_SAFETIES_ON 1)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

set(CMAKE_AUTOUIC ON)

file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS src/*.cpp)

add_executable(GraphicsFromScratchQT ${SOURCE_FILES})
target_link_libraries(GraphicsFromScratchQT
        Qt::Core
        Qt::Gui
        Qt::Widgets
        glm::glm
        yaml-cpp::yaml-cpp
        lua::lua
        sol2::sol2
        )

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/resources DESTINATION ${CMAKE_CURRENT_BINARY_DIR})