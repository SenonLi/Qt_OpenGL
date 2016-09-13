#include "SenTeapotObservationWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SenTeapotObservationWidget teapotWidget;

    teapotWidget.resize(QSize(600, 600));

    teapotWidget.show();

    return a.exec();
}
