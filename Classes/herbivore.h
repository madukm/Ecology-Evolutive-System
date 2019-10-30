#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "entity.h"
#include "world.h"

class Herbivore : public Entity
{
public:
  Herbivore(float x, float y);
  ~Herbivore();

  void move(World *world);

private:
  Position *pos;
};

#endif // HERBIVORE_H
