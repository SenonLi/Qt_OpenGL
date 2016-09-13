#ifndef SENABSTRACTGLWIDGET_H
#define SENABSTRACTGLWIDGET_H

#include <QDebug>
#include <QPoint>
#include <QMouseEvent>
#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLVertexArrayObject>

class SenAbstractGLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit SenAbstractGLWidget(QWidget *parent=0);
    virtual ~SenAbstractGLWidget();

protected:
    void initializeGL();
    void resizeGL(int w, int h);
    void paintGL();

    void mousePressEvent(QMouseEvent *event) {
        lastPos = event->pos();
//        if (event->button() == Qt::RightButton){
//            if (contextMenu){
//                contextMenu->popup(event->globalPos());
//            }
//            emit emitClicked(event->globalPos());
//        }
    }
    void mouseMoveEvent(QMouseEvent *event);
    int qtNormalizeAngle(int angle);

    int viewportWidth, viewportHeight;
    int xRot, yRot;
    QPoint lastPos;

private:
    QOpenGLVertexArrayObject vertexArrayObject;
};

#endif // SENABSTRACTGLWIDGET_H
