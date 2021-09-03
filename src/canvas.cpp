#include <iostream>
#include "canvas.h"
#include "ui_canvas.h"
#include "SceneLoader.h"
#include "RaytracingAlgorithm.h"

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

    auto files = SceneLoader::availableScenes();
    for (auto sceneFile : files)
    {
        auto listItem = new QListWidgetItem(QString(sceneFile.c_str()));

        ui->scenesList->addItem(listItem);
    }

    auto scene = SceneLoader::loadScene(files[0]);

    if (scene != nullptr)
    {
        showScene(scene, new RaytracingAlgorithm());
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
    currentScene->projectionPlaneDistance = value;


    updateScene();
}

void Canvas::updateScene()
{
    if (currentScene == nullptr)
        return;

    Image img(width, height);

    for (int x = -width/2; x < width/2; x++)
    {
        for (int y = -height/2 + 1; y <= height/2; y++)
        {
            auto D = currentScene->canvasToViewPort(x, y, width, height);
            auto color = currentAlgorithm->render(*currentScene, D);

            img.PutPixel(x, y, color);
        }
    }

    setImage(img);
}

void Canvas::cameraXValueChanged(double value)
{
    currentScene->cameraOrigin.x = value;

    updateScene();
}

void Canvas::cameraYValueChanged(double value)
{
    currentScene->cameraOrigin.y = value;

    updateScene();
}

void Canvas::cameraZValueChanged(double value)
{
    currentScene->cameraOrigin.z = value;

    updateScene();
}

void Canvas::canvasWidthValueChanged(double value)
{
    currentScene->canvasSize.x = value;

    updateScene();
}

void Canvas::canvasHeightValueChanged(double value)
{
    currentScene->canvasSize.y = value;

    updateScene();
}

void Canvas::tMinValueChanged(double value)
{
    currentScene->tMin = value;

    updateScene();
}

void Canvas::tMaxValueChanged(double value)
{
    currentScene->tMax = value;

    updateScene();
}

void Canvas::sceneListItemChanged(QListWidgetItem *current)
{
    currentScene = SceneLoader::loadScene(current->text().toStdString());

    updateScene();
}
