#include "position.h"

Position::Position(float _x, float _y):
  x(_x), y(_y)
{
}


float Position::distanceTo(Position other){
  float dX = getX()-other.getX();
  float dY = getY()-other.getY();
  return float(sqrt((dX*dX+dY*dY)));
}

float Position::angleTo(Position other){
  double deltaX = double(x-other.getX());
  double deltaY = double(y-other.getY());
  return float(atan(deltaY,deltaX)/M_PI*180);
}

float Position::getX() const
{
    return x;
}

void Position::setX(float value)
{
    x = value;
}

float Position::getY() const
{
    return y;
}

void Position::setY(float value)
{
    y = value;
}

void Position::setNewPosition(float _x, float _y)
{
    x=_x;
    y=_y;
}
