#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "Geometry/vector2d.h"
#include "Geometry/point.h"

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

  void draw_vector(Vector2D vec);
  void draw_recur(int iterations, Vector2D &vec);
  void triangle_recur(int iterations);
private:
  Ui::MainWindow *ui;
  QGraphicsScene *escena;
  QGraphicsLineItem *linea;
  QPen pincel;
};

#endif // MAINWINDOW_H
