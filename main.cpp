#include "qglwidget.h"
#include <QtWidgets/QApplication>

//class Form : public qglwidget
//{
//public:
//    using qglwidget::qglwidget;
//};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSurfaceFormat format;
    format.setVersion(3, 3);
    format.setSamples(4);
	format.setProfile(QSurfaceFormat::CoreProfile);
	QSurfaceFormat::setDefaultFormat(format);

    qglwidget w;
    w.show();
    return a.exec();
}
