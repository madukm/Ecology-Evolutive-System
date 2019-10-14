#include <stdio.h>
#include "utils.h"
#include "entity.h"

struct position_{
  float x;
  float y;
};

double get_distance(Entity *e1, Entity *e2){
  return sqrt(pow(e1->getX()-e2->getX(),2) + pow(e1->getY()-e2->getY(),2));
}

Position checkLocation(Position p1, Position p2){
  
}
