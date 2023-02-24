#ifndef QGLWIDGET_H
#define QGLWIDGET_H

#include <QtWidgets/QWidget>

//#include <QtCore/QVariant>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QOpenGLFunctions>
#include <qopengl.h>
#include <qopenglextrafunctions.h>
#include <qopenglfunctions_3_3_core.h>
//#include <QtWidgets/QApplication>
//#include <QtWidgets/QGridLayout>

#include <ui_qglwidget.h>

//QT_BEGIN_NAMESPACE
//namespace Ui { class qglwidget; }
//QT_END_NAMESPACE

//class qglwidget : public QWidget
//{
//    Q_OBJECT

//public:
//    qglwidget(QWidget *parent = nullptr);
//    ~qglwidget();

//private:
//    //Ui::Form::Ui_Form ui;
//    Ui::qglwidget* ui;
//};

//
//class Ui_Form
//{
//public:
//    QGridLayout* gridLayout;
//    QOpenGLWidget* openGLWidget;
//
//    void setupUi(QWidget* Form)
//    {
//        if (Form->objectName().isEmpty())
//            Form->setObjectName("Form");
//        Form->resize(594, 473);
//        gridLayout = new QGridLayout(Form);
//        gridLayout->setObjectName("gridLayout");
//        openGLWidget = new QOpenGLWidget(Form);
//        openGLWidget->setObjectName("openGLWidget");
//
//        gridLayout->addWidget(openGLWidget, 0, 0, 1, 1);
//
//        retranslateUi(Form);
//
//        QMetaObject::connectSlotsByName(Form);
//    }
//    void retranslateUi(QWidget* Form)
//    {
//        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
//    }
//};

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