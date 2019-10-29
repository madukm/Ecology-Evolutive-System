#include "world.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <new>
#include <utility>
#include <vector>

World::World(int n, int m){
  map.resize(m);
  for(auto row : map)
   row.resize(n);
}

void World::random_world(){
  
}

Entity *World::get_entity(Position *curr){
  return map[getX(curr)][getY[curr]];
}


