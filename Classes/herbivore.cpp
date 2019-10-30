#include "herbivore.h"

using namespace std;

Herbivore::Herbivore(float x, float y):
  Entity(x, y)
{
  type = 'H';
}

void Herbivore::move(){
  vector<Position*> *food = new vector<Position *>;
  vector<Position*> *predator = new vector<Position *>;
  int i = World->get_size();
  while(i--){
    if(pos->distanceTo(World->population[i]) <= radiusHerbivores){

    }
  }

      //need to see how i'm gonna save all the entitys around
      carnRadius--;
    }
  }
}
