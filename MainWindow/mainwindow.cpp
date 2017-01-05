#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>
#include "mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent)
{
	setWindowTitle(tr("Main Window"));
	setMaximumSize(500, 320);
	setMinimumSize(500, 320);
	openAction = new QAction(QIcon("./Resources/images/open.png"), tr("&Open..."), this);
	SaveAction = new QAction(QIcon("./Resources/images/open.png"), tr("&Save..."), this);
	SaveAction->setShortcuts(QKeySequence::Save);
	openAction->setShortcuts(QKeySequence::Open);
	openAction->setStatusTip(tr("Open an existing file"));
	connect(openAction, &QAction::triggered, this, &MainWindow::open);
	connect(SaveAction, &QAction::triggered, this, &MainWindow::open);
	QMenu *file = menuBar()->addMenu(tr("&File"));
	QMenu *save = menuBar()->addMenu(tr("&Save"));
	file->addAction(openAction);
	save->addAction(SaveAction);

	QToolBar *toolBar = addToolBar(tr("&File"));
	toolBar->addAction(openAction);

	statusBar();
}

MainWindow::~MainWindow()
{
}

void MainWindow::open()
{
	QMessageBox::information(this, tr("IMG"), tr("Sex"));
}