#include "vector2d.h"

Vector2D::Vector2D(double x, double y) :
  origin(0, 0),
  direction(origin, Point(x, y)) {}

Vector2D::Vector2D(double x, double y, double x_2, double y_2) :
  origin(x,y),
  direction(this->origin, Point(x_2, y_2)) {}

Point Vector2D::end_point() { return this->calc_end(); }

Point Vector2D::origin_point() { return this->origin; }

void Vector2D::forward() { this->origin = this->calc_end(); }

void Vector2D::rotate(double degrees)
{
  degrees = degrees / 57.295; //Convert degrees to radians.
  double x = ( this->direction.get_x() * cos(degrees) ) - ( this->direction.get_y() * sin(degrees) );
  double y = ( this->direction.get_x() * sin(degrees) ) + ( this->direction.get_y() * cos(degrees) );
  this->direction.set_x(x);
  this->direction.set_y(y);
}

void Vector2D::multiply_modulus_by(double value)
{
  this->direction.set_x(this->direction.get_x() * value);
  this->direction.set_y(this->direction.get_y() * value);
}

void Vector2D::divide_modulus_by(double value)
{
  this->direction.set_x(this->direction.get_x() / value);
  this->direction.set_y(this->direction.get_y() / value);
}

Point Vector2D::calc_end()
{
  double x, y;
  x = this->origin.get_x() - this->direction.get_x();
  y = this->origin.get_y() - this->direction.get_y();
  return Point(x,y);
}

Vector2D Vector2D::next_vector()
{
  Point end = this->calc_end();
  Vector2D out = Vector2D(end.get_x(), end.get_y(), this->direction.get_x(), this->direction.get_y());
  out.direction.set_x( this->direction.get_x() );
  out.direction.set_y( this->direction.get_y() );
  return out;
}

void Vector2D::translate_y(double value)
{
  this->origin.set_y( this->origin.get_y() + value );
}
