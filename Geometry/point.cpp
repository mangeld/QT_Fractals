#include "point.h"

Point::Point(double x, double y) : x(x), y(y) {}

double Point::get_x() { return this->x; }
double Point::get_y() { return this->y; }
void Point::set_x(double x) { this->x = x; }
void Point::set_y(double y) { this->y = y; }
