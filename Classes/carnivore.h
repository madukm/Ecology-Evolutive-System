#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "entity.h"
#include "world.h"

using namespace std;

class Carnivore : public Entity
{
public:
  Carnivore(float x, float y);
  ~Carnivore();

  void move(World *world);

private:
  Position *pos;
};

#endif // CARNIVORE_H
