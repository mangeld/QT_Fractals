#include "direction.h"

Direction::Direction(Point a, Point b)
{
  this->x = b.get_x() - a.get_x();
  this->y = b.get_y() - a.get_y();
}

double Direction::get_x() { return this->x; }
double Direction::get_y() { return this->y; }
void Direction::set_x(double x) { this->x = x; }
void Direction::set_y(double y) { this->y = y; }
