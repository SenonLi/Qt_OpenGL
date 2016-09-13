#include "SenTeapotObservationWidget.h"

SenTeapotObservationWidget::SenTeapotObservationWidget(QWidget *parent)
    : QWidget(parent), glWidget(NULL)
{
    glWidget = new SenTeapotExplodeGLWidget();
    this->setLayout(new QVBoxLayout());
    this->setWindowTitle(QString("Sen Teapot"));
    this->layout()->setContentsMargins(0,0,0,0);
    this->layout()->setSpacing(0);
    this->layout()->addWidget(glWidget);
}

SenTeapotObservationWidget::~SenTeapotObservationWidget()
{

}
