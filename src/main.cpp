#include "Classes/world.h"
#include "Classes/reference.h"

int main(){
  World *world = new World(10);
  world->random_world();
  printf("hello world");

  delete world;
  return 0;
}

/*oie
*/
