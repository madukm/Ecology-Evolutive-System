#include <stdio.h>
#include <stdlib.h>
#include "entity.h"

Entity::Entity(int x_, int y_, double property_){
  pos.x = x_;
  pos.h = y_;
  property = property_;
}

float getX(){
  return pos.x;
}
float getY(){
  return pos.y;
}

void setX(float x_){
  pos.x = x_;
}

void setY(float y_){
  pos.y = y_;
}

void Entity::move(void){}
