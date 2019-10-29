#include "carnivore.h"

Carnivore::Carnivore(float x, float y, float angle){
  pos(getX(x), getY(y), getAngle(angle))
}

void Carnivore::move(){
  food = new vector<Position*>;
  free = new vector<Position*>;
  for(int i = 0; i<360; i+=15){
    while(radiusCarnivores > 0){
      Position curr;
      curr->setX(x + radiusCarnivores*cos(i));
      curr->setY(y + radiusCarnivores*sen(i));
      //need to see how to check if they are herbivore, carnivore or plants
      if(get_entity(curr) == Herbivore){

      }
      if else(get_entity(curr) == Carnivore){

      }
      else{

      }

      //need to see how i'm gonna save all the entitys around
      carnRadius--;
    }
  }
}

