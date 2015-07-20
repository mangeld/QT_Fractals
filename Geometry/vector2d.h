#ifndef VECTOR2D_H
#define VECTOR2D_H
#include "point.h"
#include "direction.h"
#include <cmath>

class Vector2D
{
public:

  Vector2D(double x, double y);
  Vector2D(double x, double y, double x_2, double y_2);

  Point end_point();
  Point origin_point();
  void multiply_modulus_by(double value);
  void divide_modulus_by(double value);
  void forward();
  void rotate(double degrees);
  void translate_y(double value);
  Vector2D next_vector();

private:

  Point origin;
  Direction direction;
  double modulus;

  Point calc_end();
  void calc_modulus();
};

#endif // VECTOR2D_H
