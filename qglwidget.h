#ifndef QGLWIDGET_H
#define QGLWIDGET_H

#include <QtWidgets/QWidget>

#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QOpenGLFunctions>
#include <qopengl.h>
#include <qopenglextrafunctions.h>
#include <qopenglfunctions_3_3_core.h>

#include <ui_qglwidget.h>

class qglwidget : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{

public:

	qglwidget(QWidget* parent = NULL);

	~qglwidget();

private:

	Ui::qglwidget* ui;

protected:
	void initializeGL();

	void resizeGL(int w, int h);

	void paintGL();

};


#endif