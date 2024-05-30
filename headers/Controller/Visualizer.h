#pragma once
#include <qgridlayout.h>
#include <QtWidgets/QMainWindow>
#include <QMainWindow>
#include <QPushButton>
#include <QFileDialog>
#include <QSpinBox>
#include <QColorDialog>
#include <qopenglshaderprogram.h>
#include <qlabel.h>
#include "Model/Triangle.h" 

class OpenGLWindow;

class Visualizer : public QMainWindow
{
    Q_OBJECT

public:
    Visualizer();

    ~Visualizer();

    // Vector to store triangle data
    std::vector<Triangle> trianglesData;

    std::string fileName;

    float r = 0.0f, g = 1.0f, b = 1.0f; // Color components


private:
    // Function to set up UI
    void setupUi();

    void onColorDialogButtonClicked();

    // Function to generate random color
    static QString randomColor();

private:
    QWidget* mWidget; // Main widget
    QPushButton* mBrowseButton; 
    QPushButton* mRenderButton; 
    QPushButton* mVoxelizeButton; 
    QPushButton* mColorDialogButton; 
    QSpinBox* mSpinBox;
    QLabel* mSizeLabel; 
    OpenGLWindow* mRenderer; 
    QGridLayout* mGridLayout;
    QOpenGLShaderProgram* mProgram;  

private:
    // Function to set random background color for button
    void setRandomBackgroundColor(QPushButton* button);

    // Function to set random background color for spin box
    void setRandomBackgroundColor(QSpinBox* spinBox);

    // Function to open file dialog
    void openFileDialog();

    // Function to render STL file
    void renderSTL();

    // Function to voxelize STL file
    void voxelizeSTL();
};