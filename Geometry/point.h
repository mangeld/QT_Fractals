#ifndef POINT_H
#define POINT_H

class Point
{
public:
  Point(double x, double y);
  double get_x();
  double get_y();
  void set_x(double x);
  void set_y(double y);
private:
  double x, y;
};

#endif // POINT_H
