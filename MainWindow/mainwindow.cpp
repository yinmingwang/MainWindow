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
using namespace std;
using namespace cv;
MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent)
{
	setWindowTitle(tr("Main Window"));
	setMaximumSize(800, 520);
	setMinimumSize(800, 520);
	openAction = new QAction(QIcon("./Resources/images/open.png"), tr("&Open..."), this);
	SaveAction = new QAction(QIcon("./Resources/images/save.png"), tr("&Save..."), this);
	SaveAction->setShortcuts(QKeySequence::Save);
	openAction->setShortcuts(QKeySequence::Open);
	openAction->setStatusTip(tr("Open an existing file"));
	SaveAction->setStatusTip(tr("Save an existing file"));
	connect(openAction, &QAction::triggered, this, &MainWindow::open);
	connect(SaveAction, &QAction::triggered, this, &MainWindow::save);
	QMenu *file = menuBar()->addMenu(tr("&File"));
	QMenu *save = menuBar()->addMenu(tr("&Save"));
	file->addAction(openAction);
	save->addAction(SaveAction);  
	QToolBar *filetoolBar = addToolBar(tr("&File"));
	QToolBar *savetoolBar = addToolBar(tr("&Save"));
	filetoolBar->addAction(openAction);
	savetoolBar->addAction(SaveAction);
	statusBar();
}

MainWindow::~MainWindow()
{
}

void MainWindow::open()
{
	/*QDialog dialog(this);
	dialog.setMaximumSize(200, 120);
	dialog.setMinimumSize(200, 120);
	dialog.setWindowTitle(tr("Hello, dialog!"));
	dialog.exec();*/
	/*Mat image = imread("1.jpg");
	imshow("MyPicture", image);
	waitKey(0);*/
	QString openpath = QFileDialog::getOpenFileName(this,
		tr("Select"),
		"",
		tr("Images (*.png *.bmp *.jpg *.tif *.GIF)"));
	string  OpenPath= string((const char *)openpath.toLocal8Bit());
	Mat image = imread(OpenPath);
	imshow("img", image);
	waitKey(0);
}
void MainWindow::save(){
	QString savepath = QFileDialog::getSaveFileName(this,
		tr("Save"),
		"",
		tr("Images (*.png *.bmp *.jpg *.tif *.GIF"));
	string SavePath = string((const char *)savepath.toLocal8Bit());
	//imwrite(SavePath + "2.jpg", img);
}