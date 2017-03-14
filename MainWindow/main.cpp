#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include <QSpinBox>
#include <QDebug>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QVBoxLayout>
#include <qDebug>
#include <iostream>
#include <QLabel>
#include <QPushButton>
#include <QDialog>
#include <QLineEdit>
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
#pragma execution_character_set("utf-8")
int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	/*QWidget *window = new QWidget;
	window->setWindowTitle("Enter your age");

	QSpinBox *spinBox = new QSpinBox;
	QSlider *slider = new QSlider(Qt::Horizontal);
	spinBox->setRange(0, 130);
	slider->setRange(0, 130);

	QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
	QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
	spinBox->setValue(35);

	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(spinBox);
	layout->addWidget(slider);
	window->setLayout(layout);

	window->show();*/
	MainWindow w;
	//w.show();
	return app.exec();
}
