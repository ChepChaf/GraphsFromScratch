#include <QApplication>
#include <QPushButton>

#include <iostream>
#include "canvas.h"
#include "Image.h"
#include "Scene.h"
#include "Sphere.h"
#include "SceneLoader.h"

constexpr int width = 800;
constexpr int height = 640;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Canvas c(nullptr, width, height);

    c.showMaximized();

    return QApplication::exec();
}
