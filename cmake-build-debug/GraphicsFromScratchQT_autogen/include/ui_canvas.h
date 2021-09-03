/********************************************************************************
** Form generated from reading UI file 'canvas.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANVAS_H
#define UI_CANVAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Canvas
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *scenesList;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *settingsLayout;
    QVBoxLayout *projectionPlaneLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *projectionPlaneSpinBox;
    QSlider *projectionPlaneSlider;
    QVBoxLayout *cameraPositionLayout;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_21;
    QDoubleSpinBox *xCameraPos;
    QDoubleSpinBox *yCameraPos;
    QDoubleSpinBox *zCameraPos;
    QVBoxLayout *canvasSizeLayout;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_22;
    QDoubleSpinBox *canvasWidth;
    QDoubleSpinBox *canvasHeight;
    QVBoxLayout *tValuesLayout;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_23;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_24;
    QDoubleSpinBox *tMin;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_25;
    QDoubleSpinBox *tMax;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Canvas)
    {
        if (Canvas->objectName().isEmpty())
            Canvas->setObjectName(QString::fromUtf8("Canvas"));
        Canvas->resize(736, 600);
        Canvas->setMaximumSize(QSize(736, 16777215));
        centralwidget = new QWidget(Canvas);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scenesList = new QListWidget(centralwidget);
        scenesList->setObjectName(QString::fromUtf8("scenesList"));
        scenesList->setMaximumSize(QSize(250, 800));

        horizontalLayout->addWidget(scenesList);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(250, 16777215));
        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 20, 213, 173));
        settingsLayout = new QVBoxLayout(verticalLayoutWidget_2);
        settingsLayout->setObjectName(QString::fromUtf8("settingsLayout"));
        settingsLayout->setSizeConstraint(QLayout::SetMinimumSize);
        settingsLayout->setContentsMargins(0, 0, 0, 0);
        projectionPlaneLayout = new QVBoxLayout();
        projectionPlaneLayout->setObjectName(QString::fromUtf8("projectionPlaneLayout"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        projectionPlaneLayout->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        projectionPlaneSpinBox = new QSpinBox(verticalLayoutWidget_2);
        projectionPlaneSpinBox->setObjectName(QString::fromUtf8("projectionPlaneSpinBox"));
        projectionPlaneSpinBox->setMaximum(4);
        projectionPlaneSpinBox->setMinimum(1);

        horizontalLayout_2->addWidget(projectionPlaneSpinBox);

        projectionPlaneSlider = new QSlider(verticalLayoutWidget_2);
        projectionPlaneSlider->setObjectName(QString::fromUtf8("projectionPlaneSlider"));
        projectionPlaneSlider->setOrientation(Qt::Horizontal);
        projectionPlaneSlider->setMaximum(4);
        projectionPlaneSlider->setMinimum(1);

        horizontalLayout_2->addWidget(projectionPlaneSlider);


        projectionPlaneLayout->addLayout(horizontalLayout_2);


        settingsLayout->addLayout(projectionPlaneLayout);

        cameraPositionLayout = new QVBoxLayout();
        cameraPositionLayout->setObjectName(QString::fromUtf8("cameraPositionLayout"));
        label_21 = new QLabel(verticalLayoutWidget_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        cameraPositionLayout->addWidget(label_21);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        xCameraPos = new QDoubleSpinBox(verticalLayoutWidget_2);
        xCameraPos->setObjectName(QString::fromUtf8("xCameraPos"));
        xCameraPos->setMinimum(-10.000000000000000);
        xCameraPos->setMaximum(10.000000000000000);

        horizontalLayout_21->addWidget(xCameraPos);

        yCameraPos = new QDoubleSpinBox(verticalLayoutWidget_2);
        yCameraPos->setObjectName(QString::fromUtf8("yCameraPos"));
        yCameraPos->setMinimum(-10.000000000000000);
        yCameraPos->setMaximum(10.000000000000000);

        horizontalLayout_21->addWidget(yCameraPos);

        zCameraPos = new QDoubleSpinBox(verticalLayoutWidget_2);
        zCameraPos->setObjectName(QString::fromUtf8("zCameraPos"));
        zCameraPos->setMinimum(-10.000000000000000);
        zCameraPos->setMaximum(10.000000000000000);

        horizontalLayout_21->addWidget(zCameraPos);


        cameraPositionLayout->addLayout(horizontalLayout_21);


        settingsLayout->addLayout(cameraPositionLayout);

        canvasSizeLayout = new QVBoxLayout();
        canvasSizeLayout->setObjectName(QString::fromUtf8("canvasSizeLayout"));
        label_22 = new QLabel(verticalLayoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        canvasSizeLayout->addWidget(label_22);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        canvasWidth = new QDoubleSpinBox(verticalLayoutWidget_2);
        canvasWidth->setObjectName(QString::fromUtf8("canvasWidth"));
        canvasWidth->setMinimum(-10.000000000000000);
        canvasWidth->setMaximum(10.000000000000000);

        horizontalLayout_22->addWidget(canvasWidth);

        canvasHeight = new QDoubleSpinBox(verticalLayoutWidget_2);
        canvasHeight->setObjectName(QString::fromUtf8("canvasHeight"));
        canvasHeight->setMinimum(-10.000000000000000);
        canvasHeight->setMaximum(10.000000000000000);

        horizontalLayout_22->addWidget(canvasHeight);


        canvasSizeLayout->addLayout(horizontalLayout_22);


        settingsLayout->addLayout(canvasSizeLayout);

        tValuesLayout = new QVBoxLayout();
        tValuesLayout->setObjectName(QString::fromUtf8("tValuesLayout"));
        label_23 = new QLabel(verticalLayoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        tValuesLayout->addWidget(label_23);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_24 = new QLabel(verticalLayoutWidget_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_3->addWidget(label_24);

        tMin = new QDoubleSpinBox(verticalLayoutWidget_2);
        tMin->setObjectName(QString::fromUtf8("tMin"));
        tMin->setMinimum(1.000000000000000);
        tMin->setMaximum(10.000000000000000);

        horizontalLayout_3->addWidget(tMin);


        horizontalLayout_23->addLayout(horizontalLayout_3);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_25 = new QLabel(verticalLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_31->addWidget(label_25);

        tMax = new QDoubleSpinBox(verticalLayoutWidget_2);
        tMax->setObjectName(QString::fromUtf8("tMax"));
        tMax->setMinimum(1.000000000000000);

        horizontalLayout_31->addWidget(tMax);


        horizontalLayout_23->addLayout(horizontalLayout_31);


        tValuesLayout->addLayout(horizontalLayout_23);


        settingsLayout->addLayout(tValuesLayout);


        verticalLayout->addWidget(groupBox);


        horizontalLayout->addLayout(verticalLayout);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        Canvas->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Canvas);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 736, 22));
        Canvas->setMenuBar(menubar);
        statusbar = new QStatusBar(Canvas);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Canvas->setStatusBar(statusbar);

        retranslateUi(Canvas);

        QMetaObject::connectSlotsByName(Canvas);
    } // setupUi

    void retranslateUi(QMainWindow *Canvas)
    {
        Canvas->setWindowTitle(QCoreApplication::translate("Canvas", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Canvas", "Settings", nullptr));
        label_2->setText(QCoreApplication::translate("Canvas", "Projection Plane Distance", nullptr));
        label_21->setText(QCoreApplication::translate("Canvas", "Camera Position", nullptr));
        label_22->setText(QCoreApplication::translate("Canvas", "Canvas Size", nullptr));
        label_23->setText(QCoreApplication::translate("Canvas", "T Values", nullptr));
        label_24->setText(QCoreApplication::translate("Canvas", "T Min", nullptr));
        label_25->setText(QCoreApplication::translate("Canvas", "T Max", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Canvas: public Ui_Canvas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANVAS_H
