#include "carnivore.h"

using namespace std;

Carnivore::Carnivore(float x, float y):
  Entity(x, y)
{
  type = 'C';
}

void Carnivore::move(){
  vector<Position*> *food = new vector<Position *>;
  int i = World->get_size();

}
