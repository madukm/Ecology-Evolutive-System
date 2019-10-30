#include "carnivore.h"

using namespace std;

Carnivore::Carnivore(float x, float y):
  Entity(x, y)
{
  type = 'C';
}

void Carnivore::move(World *world){
  vector<Position*> food;
  food.resize(world->get_size());
  int i = world->get_size();
  while(i--){
    int f = 0;
    if(pos->distanceTo(world->get_population()[i]->get_position()) <= radiusHerbivores){
      if(world->get_population()[i]->get_type() == 'H'){
        food[f++] = (world->get_population()[i])->get_position();
      }
      else{
        //is another carnivore or a plant, so do not put in any vector
      }
    }
  }
  float minimum = pos->distanceTo(food[0]);
  //int index;
  //char carn = 'C';
  for(int i=0; i<food.size(); i++){
    if(minimum > (pos->distanceTo(food[i])))
      minimum = pos->distanceTo(food[i]);
  }
  //como eu vou mudar world?? eis a pergunta


}
