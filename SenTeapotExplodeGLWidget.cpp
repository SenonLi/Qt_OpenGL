#include "SenTeapotExplodeGLWidget.h"
#include "teapot.h"

SenTeapotExplodeGLWidget::SenTeapotExplodeGLWidget(QWidget *parent)
    : SenAbstractGLWidget(parent)
{

}

SenTeapotExplodeGLWidget::~SenTeapotExplodeGLWidget()
{
    qDebug() << QString("~SenTeapotExplodeGLWidget");
}

void SenTeapotExplodeGLWidget::initializeGL()
{
    SenAbstractGLWidget::initializeGL();


}

void SenTeapotExplodeGLWidget::paintGL()
{
    SenAbstractGLWidget::paintGL();

    drawingTeapot();
}
