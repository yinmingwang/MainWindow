#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include <QSpinBox>
#include <QDebug>
#include <QHBoxLayout>
#include <QMessageBox>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	MainWindow window;
	/*window.setWindowTitle("Enter your age");
	window.setMinimumSize(500, 320);
	window.setMaximumSize(500, 320);
	QSpinBox *spinBox = new QSpinBox(&window);
	QSlider *slider = new QSlider(Qt::Horizontal, &window);
	spinBox->setRange(0, 130);
	slider->setRange(0, 130);
	QObject::connect(slider, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
	void (QSpinBox:: *spinBoxSignal)(int) = &QSpinBox::valueChanged;
	QObject::connect(spinBox, spinBoxSignal, slider, &QSlider::setValue);
	spinBox->setValue(0);
	int a = spinBox->value();
	qDebug("a:%d",a);
	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(spinBox);
	layout->addWidget(slider);
	window.setLayout(layout);*/
	window.show();

	return app.exec();
}
