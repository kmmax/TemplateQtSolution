#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QLabel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}


//!
//! \brief Button <Message from dynamic library>
//!
void MainWindow::on_btShared_clicked()
{
    SharedLib lib;
    QString msg = lib.printHello();
    setLabelView(ui->lbShared, msg);
}


//!
//! \brief Button <Message from static library>
//!
void MainWindow::on_btStatic_clicked()
{
    StaticLib lib;
    QString msg = lib.printHello();
    setLabelView(ui->lbStatic, msg);
}


//!
//! \brief Prints Help message
//!
void MainWindow::on_actionAbout_triggered()
{
    QString msg = "Shows messages from libraries\n"
                    "+ Static\n"
                    "+ Shared\n";
    QMessageBox::about(this, "About", msg);
}


//!
//! \brief Sets background color for label
//! \param label - label which will be changed
//!
void MainWindow::setLabelView(QLabel *label, const QString &msg)
{
    label->setAutoFillBackground(true);
    QPalette palette = label->palette();
    palette.setColor(label->backgroundRole(), Qt::green);
    label->setPalette(palette);
    label->setText(msg);
}
