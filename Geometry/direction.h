#ifndef DIRECTION_H
#define DIRECTION_H
#include "point.h"

class Direction
{
public:
  Direction(Point a, Point b);
  double get_x();
  double get_y();
  void set_x(double x);
  void set_y(double y);
private:
  double x, y;
};

#endif // DIRECTION_H
