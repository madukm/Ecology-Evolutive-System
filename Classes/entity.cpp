#include <stdio.h>
#include <stdlib.h>
#include "entity.h"

Entity(int x_, int y_, float angle_, double property_){
  pos->setX(x_);
  pos->setY(y_);
  pos->setAngle(angle_);
  property = property_;
}

Entity::~Entity(){}

void Entity::move(void){}
