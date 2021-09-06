#include <iostream>
#include <thread>
#include "canvas.h"
#include "ui_canvas.h"
#include "SceneLoader.h"
#include "ShaderLoader.h"

Canvas::Canvas(QWidget *parent, int width, int height) :
    QMainWindow(parent),
    ui(new Ui::Canvas)
{
    this->width = width;
    this->height = height;

    ui->setupUi(this);

    connect(ui->projectionPlaneSlider, SIGNAL(valueChanged(int)),
            SLOT(projectionPlaneValueChanged(int)));
    connect(ui->projectionPlaneSlider, SIGNAL(valueChanged(int)),
            ui->projectionPlaneSpinBox, SLOT(setValue(int)));
    connect(ui->projectionPlaneSpinBox, SIGNAL(valueChanged(int)),
            ui->projectionPlaneSlider, SLOT(setValue(int)));

    connect(ui->xCameraPos, SIGNAL(valueChanged(double)),
            SLOT(cameraXValueChanged(double)));
    connect(ui->yCameraPos, SIGNAL(valueChanged(double)),
            SLOT(cameraYValueChanged(double)));
    connect(ui->zCameraPos, SIGNAL(valueChanged(double)),
            SLOT(cameraZValueChanged(double)));

    connect(ui->canvasWidth, SIGNAL(valueChanged(double)),
            SLOT(canvasWidthValueChanged(double)));
    connect(ui->canvasHeight, SIGNAL(valueChanged(double)),
            SLOT(canvasHeightValueChanged(double)));

    connect(ui->tMin, SIGNAL(valueChanged(double)),
            SLOT(tMinValueChanged(double)));
    connect(ui->tMax, SIGNAL(valueChanged(double)),
            SLOT(tMaxValueChanged(double)));

    connect(ui->scenesList, SIGNAL(currentItemChanged(QListWidgetItem*, QListWidgetItem*)),
            SLOT(sceneListItemChanged(QListWidgetItem*)));

    ShaderLoader::init();
    auto files = SceneLoader::availableScenes();
    for (auto sceneFile : files)
    {
        auto listItem = new QListWidgetItem(QString(sceneFile.c_str()));

        ui->scenesList->addItem(listItem);
    }

    auto scene = SceneLoader::loadScene(files[0]);

    if (scene != nullptr)
    {
        auto shaderFiles = ShaderLoader::availableShaders();

        auto algorithm = ShaderLoader::loadShader(shaderFiles[0]);
        showScene(scene, algorithm);
    }
}

Canvas::~Canvas()
{
    delete ui;
}

void Canvas::setImage(Image image)
{
    QImage img(image.pixels, image.width, image.height, QImage::Format_RGB888);
    auto pixmap = QPixmap::fromImage(img);

    ui->label->setPixmap(pixmap);

    this->update();
}

void Canvas::showScene(Scene *scene, RenderingAlgorithm *algorithm)
{
    this->currentScene = scene;
    this->currentAlgorithm = algorithm;

    ui->projectionPlaneSlider->setValue(scene->projectionPlaneDistance);
    ui->canvasWidth->setValue(scene->canvasSize.x);
    ui->canvasHeight->setValue(scene->canvasSize.y);
    ui->xCameraPos->setValue(scene->cameraOrigin.x);
    ui->yCameraPos->setValue(scene->cameraOrigin.y);
    ui->zCameraPos->setValue(scene->cameraOrigin.z);
    ui->tMin->setValue(scene->tMin);
    ui->tMax->setValue(scene->tMax);

    updateScene();
}

void Canvas::projectionPlaneValueChanged(int value)
{

}

void Canvas::updateScene()
{
    if (currentScene == nullptr)
        return;

    auto renderedImg = currentAlgorithm->render(*currentScene, width, height);

    Image img(width, height);

    for (int x = -width/2, i = 0; x < width/2; x++)
    {
        for(int y = -height/2; y < height/2; y++, i++)
        {
            img.PutPixel(x, y, renderedImg[i]);
        }
    }

    setImage(img);
}

void Canvas::cameraXValueChanged(double value)
{
    currentScene->cameraOrigin.x = value;
}

void Canvas::cameraYValueChanged(double value)
{
    currentScene->cameraOrigin.y = value;
}

void Canvas::cameraZValueChanged(double value)
{
    currentScene->cameraOrigin.z = value;
}

void Canvas::canvasWidthValueChanged(double value)
{
    currentScene->canvasSize.x = value;
}

void Canvas::canvasHeightValueChanged(double value)
{
    currentScene->canvasSize.y = value;
}

void Canvas::tMinValueChanged(double value)
{
    currentScene->tMin = value;
}

void Canvas::tMaxValueChanged(double value)
{
    currentScene->tMax = value;
}

void Canvas::sceneListItemChanged(QListWidgetItem *current)
{
    currentScene = SceneLoader::loadScene(current->text().toStdString());

    updateScene();
}
