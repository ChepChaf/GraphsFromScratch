#ifndef CANVAS_H
#define CANVAS_H

#include <QMainWindow>
#include <QListWidgetItem>
#include "Image.h"
#include "Scene.h"
#include "RenderingAlgorithm.h"

namespace Ui {
class Canvas;
}

class Canvas : public QMainWindow
{
    Q_OBJECT

public:
    explicit Canvas(QWidget *parent = nullptr, int width = 0, int height = 0);
    ~Canvas();

    void setImage(Image image);
    void showScene(Scene *scene, RenderingAlgorithm *algorithm);

    public slots:
        void projectionPlaneValueChanged(int value);
        void cameraXValueChanged(double value);
        void cameraYValueChanged(double value);
        void cameraZValueChanged(double value);
        void canvasWidthValueChanged(double value);
        void canvasHeightValueChanged(double value);
        void tMinValueChanged(double value);
        void tMaxValueChanged(double value);
        void sceneListItemChanged(QListWidgetItem *current);

private:
    Ui::Canvas *ui;
    int width, height;
    Scene *currentScene;
    RenderingAlgorithm* currentAlgorithm;

    void updateScene();
};

#endif // CANVAS_H
