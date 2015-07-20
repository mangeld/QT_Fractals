#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow),
  pincel(Qt::black)
{
  ui->setupUi(this);
  escena = new QGraphicsScene(this);
  ui->graphicsView->setScene(escena);
  ui->graphicsView->setRenderHint(QPainter::Antialiasing);
  QPen blackPen(Qt::black);
  this->triangle_recur(4);
  //linea = escena->addLine(10, 10, 40, 40, blackPen);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::draw_recur(int iterations, Vector2D &vec)
{
  vec.divide_modulus_by(3);

  Vector2D v1 = vec.next_vector();
  v1.rotate(-60);

  Vector2D v2 = v1.next_vector();
  v2.rotate(120);

  Vector2D v3 = v2.next_vector();
  v3.rotate(-60);

  if( iterations - 1 != 0 )
  {
    this->draw_recur(iterations - 1, vec);
    this->draw_recur(iterations - 1, v1);
    this->draw_recur(iterations - 1, v2);
    this->draw_recur(iterations - 1, v3);
  }

  this->draw_vector(vec);
  this->draw_vector(v1);
  this->draw_vector(v2);
  this->draw_vector(v3);
}

void MainWindow::draw_vector(Vector2D vec)
{
  Point p1 = vec.origin_point();
  Point p2 = vec.end_point();
  qreal x1 = p1.get_x();
  qreal y1 = p1.get_y();
  qreal x2 = p2.get_x();
  qreal y2 = p2.get_y();

  this->escena->addLine(x1, y1, x2, y2,this->pincel);
}

void MainWindow::triangle_recur(int iterations)
{
  Vector2D vec (50, 120, 400, 120);
  Vector2D v1 = vec.next_vector();
  v1.rotate(120);
  Vector2D v2 = v1.next_vector();
  v2.rotate(120);

  /*this->draw_vector(vec);
  this->draw_vector(v1);
  this->draw_vector(v2);*/

  this->draw_recur(iterations, vec);
  this->draw_recur(iterations, v1);
  this->draw_recur(iterations, v2);
}
