#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <qDebug>
#include <iostream>
#include <QLabel>
#include <QPushButton>
#include <QDialog>
#include <QLineEdit>
using namespace cv;
class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();
	~MainWindow();

private:
	Ui::MainWindowClass ui;
	QLineEdit *inputwidth;
	QLineEdit *inputheight;
	QVBoxLayout *Vlayout;
	QHBoxLayout *HWlayout;
	QHBoxLayout *HHlayout;
	QVBoxLayout *mainLayout;
	QLabel *width;
	QLabel *height;
	QPushButton *sure;
	QWidget *window;
};

#endif // MAINWINDOW_H
