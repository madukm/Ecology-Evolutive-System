#include "entity.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <new>
#include <utility>
#include <vector>

void Class World::World(int n, int m){
  map.resize(m);
  for(auto row : m)
   row.resize(n);
}
