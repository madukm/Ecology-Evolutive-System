#include "herbivore.h"

using namespace std;

Herbivore::Herbivore(float x, float y):
  Entity(x, y)
{
  type = 'H';
}

void Herbivore::move(World *world){
  vector<Position*> food;
  vector<Position*> predator;
  predator.resize(world->get_size());
  food.resize(world->get_size());
  float i = world->get_size();
  while(i--){
    int f = 0, p = 0;
    if(pos->distanceTo(world->get_population()[i]->get_position()) <= radiusHerbivores){
      if(world->get_population()[i]->get_type() == 'C'){
        predator[p++] = (world->get_population()[i])->get_position();
      }
      else if(world->get_population()[i]->get_type() == 'P'){
        food[f++] = (world->get_population()[i])->get_position();
      }
      else{
        //is another herbivore, so do not put in any vector
      }
    }
  }
  //now we have to think on how the herbivore will move
}
