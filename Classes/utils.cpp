#include <stdio.h>
#include "utils.h"
#include <math.h>

double utils::get_distance(Entity *e1, Entity *e2){
  return sqrt(pow(e1->getX()-e2->getX(),2) + pow(e1->getY()-e2->getY(),2));
}

Position utils::checkLocation(Position p1, Position p2){
  return {0,0};
}
