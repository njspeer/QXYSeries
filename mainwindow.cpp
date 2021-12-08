#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>

/* How to add a QChart(QtCharts::QLineSeries) to a QMainWindow */

//QT_CHARTS_USE_NAMESPACE

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  /* Create your time series */
  series = new QtCharts::QLineSeries();
  series->append(0, 6);
  series->append(2, 4);
  series->append(3, 8);
  series->append(7, 4);
  series->append(10, 5);
  *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);

  /* Configure your chart */
  QChart *chart = new QChart();
  chart->legend()->hide();
  chart->addSeries(series);
  chart->createDefaultAxes();
  chart->setTitle("Simple line chart example");

  /* Create your chart view */
  QChartView *chartView = new QChartView(chart);
  chartView->setRenderHint(QPainter::Antialiasing);

  /* put chart in wiget */
  ui->chartView->setChart(chart);
}

MainWindow::~MainWindow()
{
  delete ui;
}

