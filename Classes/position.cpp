#include "position.h"
#include <math.h>
#include <stdio.h>

#define M_PI 3.141592

Position::Position(float _x, float _y, float _angle){
  x(_x), y(_y), angle(_angle)
}


float distanceTo(Position other){
  float dX = getX()-other.getX();
  float dY = getY()-other.getY();
  return float(sqrt((dX*dX+dY*dY)));
}

float angleTo(Position other){
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

float Position::getAngle() const
{
    return angle;
}

void Position::setAngle(float value)
{
    angle = value;
    angle<0?angle+=360:angle;
    angle>360?angle-=360:angle;
}

void Position::setNewPosition(float _x, float _y, float _angle)
{
    x=_x;
    y=_y;
    angle=_angle;
