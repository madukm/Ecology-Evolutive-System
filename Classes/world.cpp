#include "world.h"
#include "entity.h"
#include "position.h"
#include "reference.h"

using namespace std;

World::World(int n){
  population.resize(n);
  size = n;
}

void World::random_world(){
  int i, j;
  for(i = 0; i < get_size(); i++){
    population[i] = new Entity(randomize_0_10(), randomize_0_10());
    for(j=0; j<i; j++){
      if((population[i]->get_position())->distanceTo(population[j]->get_position()) == 0){

      }
    }
  }
}

float World::get_size() const{
  return size;
}

std::vector<Entity *> World::get_population(){
  return population;
}
