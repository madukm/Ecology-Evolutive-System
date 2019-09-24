#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <new>

using namespace std;

#define plant_rate 0.3
#define herb_rate 0.3
#define carn_rate 0.2
#define nothing_rate 0.2

typedef struct properties{
  double energy;
  double speed;

}Properties;

typedef struct grass{
  int pos_x;
  int pos_y;
  float growth_rate;
  Properties grass_p;
}Grass;

typedef struct carnivore{
  int pos_x;
  int pos_y;
  Properties carn_prop;
}Carnivore;

typedef struct herbivore{
  int pos_x;
  int pos_y;
  Properties herb_prop;
}Herbivore;

typedef struct world{
  int size_x;
  int size_y;
  char **map;
}World;

float randomize(void){
  return ((float)rand())/(float)RAND_MAX;
}

World *inicialize_world(int x, int y){
  World *world = new World;
  world->size_x = x;
  world->size_y = y;
  world->map = new char*[x];
  for(int i=0; i<x; i++){
    world->map[i] = new char[y];
  }
  return world;
}

//Carnivore *inicialize_carn()
/*[0-0.2) = carn_rate;
  [0.2-0.4) = nothing_rate;
  [0.4-0.7) = herb_rate;
  [0.7-1.0] = plant_rate;
*/
void random_world(World *world){
  int i, j;
  float random;
  for(i=0; i<world->size_x; i++){
    for(j=0; j<world->size_y; j++){
      random = randomize();
      if(random >= 0 && random < 0.2){
        world->map[i][j] = 'C';
      }
      if(random >= 0.2 && random < 0.4){
        world->map[i][j] = '.';
      }
      if(random >=0.4 && random <0.7){
        world->map[i][j] = 'H';
      }
      if(random >= 0.7 && random <= 1){
        world->map[i][j] = 'M';
      }
    }
  }
}

void print_world(World *world){
  int i, j;
  for(i=0; i<world->size_x; i++){
    for(j=0; j<world->size_y; j++)
      std::cout << world->map[i][j];
    std::cout << endl;
  }
}

int main(){
  int i, j, k;
  World *world = inicialize_world(10, 10);
  random_world(world);
  print_world(world);
  delete world;
  return 0;




}
