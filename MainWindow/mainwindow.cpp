#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include <QDialog>
#include <QFileDialog>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QFileDialog>
#include <qDebug>
#include "mainwindow.h"
#include <iostream>
#include <stdio.h>
#include <QApplication> 
#include <QWidget> 
#include <QSpinBox> 
#include <QSlider> 
#include <QHBoxLayout> 
#include "mainwindow.h"
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
using namespace std;
using namespace cv;
#pragma execution_character_set("utf-8")
MainWindow::MainWindow()
{
	setWindowTitle(tr("Main Window"));
	setMaximumSize(800, 520);
	setMinimumSize(800, 520);
	window = new QWidget;
	window->setWindowTitle("Enter your age");
	inputwidth = new QLineEdit;
	inputheight = new QLineEdit;
	Vlayout = new QVBoxLayout;
	HWlayout = new QHBoxLayout;
	HHlayout = new QHBoxLayout;
	mainLayout = new QVBoxLayout;
	width = new QLabel;
	height = new QLabel;
	sure = new QPushButton;
	sure->setText(QObject::tr("确定"));
	sure->setFixedSize(50, 30);
	//sure->setStyleSheet("QPushButton{" "border-top-left-radius:11px;" "}");
	width->setText(QObject::tr("宽度"));
	width->setBuddy(inputwidth);
	height->setText(QObject::tr("高度"));
	height->setBuddy(inputheight);
	HWlayout->addWidget(width);
	HWlayout->addWidget(inputwidth);
	HHlayout->addWidget(height);
	HHlayout->addWidget(inputheight);
	mainLayout->addLayout(HWlayout);
	mainLayout->addLayout(HHlayout);
	mainLayout->addWidget(sure);
	window->setLayout(mainLayout);
	window->show();
}

MainWindow::~MainWindow()
{
}