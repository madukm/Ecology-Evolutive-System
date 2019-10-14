#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "carnivore.h"
#include "utils.h"

Carnivore::Carnivore(){

}

void Carnivore::move(){
  for(int i = 0; i<360; i+=15){
    while(carnRadius > 0){
      Position curr;
      curr.x = x + carnRadius*cos(i);
      curr.y = y + carnRadius*sen(i);
      curr = getRightLocation(curr);
      //need to see how i'm gonna save all the entitys around
      carnRadius--;
    }

  }
}
