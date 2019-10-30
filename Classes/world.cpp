#include "world.h"

using namespace std;

World::World(int n){
  population.resize(n);
  size = n;
}

void World::random_world(){
  int i, j;
  for(i = 0; i < size; i++){
    population[i] = new Entity(randomize_0_10(), randomize_0_10());
    for(j=0; j<i; j++){

    }
  }
}

int World::get_size() const{
  return size;
}
