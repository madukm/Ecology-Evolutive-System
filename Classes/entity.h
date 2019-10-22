#ifndef ENTITY_H
#define ENTITY_H

#include "position.h"
#include "parameters.h"
#include <vector>
using namespace std;

class Entity{
public:
  Entity(int x_, int y_, int _angle, double property_);
  ~Entity();

  virtual void move();

protected:
  Position pos; //where it is
  double speed; //for future purposes;
  double property; //growht rate and energy
};

#endif
