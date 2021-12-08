# QXYSeries
How to add a QChart(QtCharts::QLineSeries) to a QMainWindow

## QChartView Widget by Promotion

0. Adapted from [this](https://doc.qt.io/qt-5/qtcharts-linechart-example.html) example.  Follow solutions from [here](https://stackoverflow.com/questions/48362864/how-to-insert-qchartview-in-form-with-qt-designer) and [here](https://stackoverflow.com/questions/55475653/how-to-install-qchartview-in-qt-designer).

1.  Make sure to add 'QT += charts' to your .pro file
2.  Create a widget (or main window) class and add a 'Graphics View' object.
3.  Right-clicke on the Graphics-View object and select 'Promote to ...'
4.  Fill in the form as follows:
    1.  Base class name: 'QGraphicsView'
    2.  Promoted class name 'QChartView'
    3.  Header file: 'QtCharts'

5.  Click 'Promoted' and your Graphics-View widget should now be a QChartView widget

## Build the plugins from Source Code

0. Adapted from [here](https://stackoverflow.com/questions/37869807/qt-charts-and-data-visualization-widgets)

1. Go [here](https://github.com/qt/qtcharts/) and download the zip file for your version of Qt.
2. Extract the zip file (there should be only five files) and navigate to /plugins/designer/
3. Open a terminal window in this location and run:
    1. qmake
    2. make
    3. make install (this step didn't work for me)
4. This should create a 'libqtchartsdesigner.so' file.  Copy that file to '~/Qt/Tools/QtCreator/lib/Qt/plugins/designer/' (or wherever you have Qt installed)





