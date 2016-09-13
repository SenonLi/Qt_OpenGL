#include "SenAbstractGLWidget.h"

SenAbstractGLWidget::SenAbstractGLWidget(QWidget *parent)
    :QOpenGLWidget(parent), xRot(0.0), yRot(0.0)
{
    lastPos = QPoint(0.0, 0.0);
    viewportWidth = 500;
    viewportHeight = 500;
}

SenAbstractGLWidget::~SenAbstractGLWidget()
{
    qDebug() << QString("~SenAbstractGLWidget");
}

void SenAbstractGLWidget::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.2f, 0.2f, 0.2f, 1.0f);

    // Create the vertex array objact(VAO), mandatory
//    vertexArrayObject.create();
//    vertexArrayObject.bind();

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);

    glEnable(GL_COLOR_MATERIAL);
}

void SenAbstractGLWidget::paintGL()
{
    // clear the screen
    int side = qMin(viewportWidth, viewportHeight);
    glViewport((viewportWidth - side)/2, (viewportHeight - side)/2, side, side);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();

    glRotatef(yRot / 16.0, 1.0, 0.0, 0.0);
    glRotatef(xRot / 16.0, 0.0, 1.0, 0.0);
}

void SenAbstractGLWidget::resizeGL(int w, int h)// do not understand
{
    //    glViewport(0, 0, localWidth, localHeight);

    // Set the viewport
    viewportHeight = h;
    viewportWidth = w;

    int side = qMin(w, h);
    glViewport((w - side)/2, (h - side)/2, side, side);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-5.0, +5.0, -5.0, +5.0, -5.0, +5.0);

    glMatrixMode(GL_MODELVIEW);

}

int SenAbstractGLWidget::qtNormalizeAngle(int angle)
{
    while (angle < 0)   angle += 360 * 16;
    while (angle > 360) angle -= 360 * 16;
    return angle;
}

void SenAbstractGLWidget::mouseMoveEvent(QMouseEvent *event)
{
    int dx = event->x() - lastPos.x();
    int dy = event->y() - lastPos.y();

    if (event->buttons() & Qt::LeftButton) {
        xRot = qtNormalizeAngle(xRot + 8 * dx);
        yRot = qtNormalizeAngle(yRot + 8 * dy);
    }
    else if (event->buttons() & Qt::RightButton) {
        ;
    }
    lastPos = event->pos();

    update();
}
