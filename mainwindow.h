#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts/QLineSeries>

namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  QtCharts::QLineSeries *series;
  ~MainWindow();

private:
  Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
