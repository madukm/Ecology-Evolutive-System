#include "plant.h"

Plant::Plant(float x, float y):
  Entity(x, y)
{
  type = 'P';
}

void Plant::move(){
  //the plant doesn't move
}
