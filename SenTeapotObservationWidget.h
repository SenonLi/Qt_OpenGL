#ifndef SENTEAPOTEXPLOREWIDGET_H
#define SENTEAPOTEXPLOREWIDGET_H

#include <QWidget>
#include <QLayout>
#include <QVBoxLayout>

#include "SenTeapotExplodeGLWidget.h"

class SenTeapotObservationWidget : public QWidget
{
    Q_OBJECT

public:
    SenTeapotObservationWidget(QWidget *parent = 0);
    ~SenTeapotObservationWidget();

protected:
    void showEvent(QShowEvent *){;}

    SenTeapotExplodeGLWidget* glWidget;
}
;

#endif // SENTEAPOTEXPLOREWIDGET_H
