#include "world.h"
#include <stdio.h>

int main(){
  world = new World(10, 10);
  world->random_world();
  

  delete world;
  return 0;
}
