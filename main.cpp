#include "reference.h"
#include "world.h"
#include "entity.h"
/*#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <new>
#include <utility>
#include <vector>

#define Energy 100
#define GrowthRate 2

enum{
  Carnivore,
  Herbivore,
  Grass,
  Nothing,
};

typedef struct entity{
  std::pair <int, int> position; //where it is
  double speed; //for future purposes;
  int Species;
  union Species_{
    int Carnivore;
    int Herbivore;
    int Grass;
    int Nothing;
  } Species;
  union Properties_{
    double growth_rate; //for plants
    double energy; //for animals
  } Properties;
}Entity;

typedef struct world{
  int dimensionX;
  int dimensionY;
  Entity **map;
}World;

//functions:
void random_world(World *world);
float randomize(void);
void inicialize_world(World *world, int x, int y);
void print_world(World *world);
//(x+r sen teta, y+r cos teta)

*/
int main(){
  int i, j, k;
  srand(time(NULL));
  World *world;
  inicialize_world(world, 10, 10);
  random_world(world);
  print_world(world);
  delete world;
  return 0;
}


float randomize(void){
  return ((float)rand())/(float)RAND_MAX;
}

void inicialize_world(World *world, int x, int y){
  world->dimensionX = x;
  world->dimensionY = y;
  world->map = new Entity*[x];
  for(int i=0; i<x; i++){
    world->map[i] = new Entity[y];
  }
}

void inicialize_entity(Entity *entity, int x, int y, int species, double property){
  entity->position.first = x;
  entity->position.second = y;
  //entity->Species = species;
  switch(species){
    case 0:
        entity->Species =
        entity->Properties.energy = property;
        break;
    case 1:
        entity->Properties.energy = property;
        break;
    case 2:
        entity->Properties.growth_rate = property;
        break;
    case 3:
        entity->Properties.growth_rate = property;
        break;
    }
}

void random_world(World *world){
  int i, j;
  float random;
  for(i=0; i<world->dimensionX; i++){
    for(j=0; j<world->dimensionY; j++){
      random = randomize();
      if(random >= 0 && random < 0.2){
        inicialize_entity(world->map[i][j], i, j, Carnivore, Energy);
        //world->Entity[i][j] = 'C';
      }
      if(random >= 0.2 && random < 0.4){
        inicialize_entity(world->map[i][j], i, j, Nothing, 0);
        //world->map[i][j] = '.';
      }
      if(random >=0.4 && random <0.7){
        inicialize_entity(world->map[i][j], i, j, Herbivore, Energy);
        //world->map[i][j] = 'H';
      }
      if(random >= 0.7 && random < 1){
        inicialize_entity(world->map[i][j], i, j, Grass, GrowthRate);
        //world->map[i][j] = 'M';
      }
    }
  }
}

void print_world(World *world){
  int i, j;
  for(i=0; i<world->dimensionX; i++){
    for(j=0; j<world->dimensionY; j++){
      switch(world->map[i][j].Species){
        case 1:
            std::cout << 'C';
            break;
        case 2: //herbivore
            std::cout << 'H';
            break;
        case 3: //grass
            std::cout << 'G';
            break;
        case 4: //nothing
            std::cout << '.';
            break;

    }
    std::cout << std::endl;
  }
}

void move(World &world, Entity &entity){

}
