#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "staticlib.h"
#include "sharedlib.h"

#include <QMainWindow>


class QLabel;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btShared_clicked();
    void on_btStatic_clicked();
    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
    void setLabelView(QLabel* label, const QString& msg);
};

#endif // MAINWINDOW_H
