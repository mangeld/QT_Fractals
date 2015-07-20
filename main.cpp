#include "mainwindow.h"
#include <QApplication>
#include "Geometry/vector2d.h"
#include <iostream>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  MainWindow w;
  w.show();

  return a.exec();

}
