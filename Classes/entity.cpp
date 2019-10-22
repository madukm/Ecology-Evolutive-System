#include <stdio.h>
#include <stdlib.h>
#include "entity.h"

Entity::Entity(int x_, int y_, double property_){
  pos.x = x_;
  pos.y = y_;
  property = property_;
}

Entity::~Entity(){}

float Entity::getX(){
  return pos.x;
}
float Entity::getY(){
  return pos.y;
}

void Entity::setX(float x_){
  pos.x = x_;
}

void Entity::setY(float y_){
  pos.y = y_;
}

void Entity::move(void){}
