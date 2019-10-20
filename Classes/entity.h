#ifndef ENTITY_H
#define ENTITY_H

#include "parameters.h"
#include <vector>
using namespace std;

// Change this later (ask Breno why)
typedef struct position_ Position;
struct position_{
  float x;
  float y;
};

class Entity{
public:
  Entity(int x_, int y_, double property_);
  ~Entity();

  virtual void move();

  //getters
  float getX();
  float getY();

  //setters
  void setX(float x_);
  void setY(float y_);

protected:
  Position pos; //where it is
  double speed; //for future purposes;
  double property; //growht rate and energy
};

#endif
