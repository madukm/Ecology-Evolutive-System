#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "herbivore.h"

Herbivore::Herbivore(float x, float y, float angle){
  pos(getX(x), getY(y), getAngle(angle))
}

void Herbivore::move(){
  food = new vector<Position *>;
  predator = new vector<Position *>;
  free = new vector<Position *>;
  for(int i = 0; i<360; i+=15){
    while(radiusHerbivores > 0){
      Position curr;
      curr->setX(x + radiusHerbivores*cos(i));
      curr->setY(y + radiusHerbivores*sen(i));


      //need to see how i'm gonna save all the entitys around
      carnRadius--;
    }
  }
}
