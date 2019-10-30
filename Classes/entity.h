#ifndef ENTITY_H
#define ENTITY_H

#include "position.h"
#include "reference.h"
#include "world.h"

class Entity{
public:
  Entity(float x_, float y_);
  ~Entity();

  virtual void move();

protected:
  Position *pos; //where it is
  char type; //'C' for carnivore, 'H' for herbivore, 'P' for plant
  float speed; //for future purposes;
  float property; //growht rate and energy
};

#endif // ENTITY_H
