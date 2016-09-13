#ifndef SENTEAPOTEXPLODEGLWIDGET_H
#define SENTEAPOTEXPLODEGLWIDGET_H

#include <QWidget>

#include "SenAbstractGLWidget.h"

class SenTeapotExplodeGLWidget : public SenAbstractGLWidget
{
    Q_OBJECT

public:
    explicit SenTeapotExplodeGLWidget(QWidget *parent = 0);
    ~SenTeapotExplodeGLWidget();

protected:
    void initializeGL();
    void paintGL();

};

#endif // SENTEAPOTEXPLODEGLWIDGET_H
