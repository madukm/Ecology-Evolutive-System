#ifndef HERBIVORE_H
#define HERBIVORE_H

#include "entity.h"

class Herbivore : public Entity
{
public:
  Herbivore(float x, float y);
  ~Herbivore();

  void move();

private:
  Position *pos;
};

#endif // HERBIVORE_H
