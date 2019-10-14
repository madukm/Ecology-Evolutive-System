#ifndef ENTITY_H
#define ENTITY_H
#include "parameters.h"
#include "utils.h"
#include <vector>
using namespace std;

Class Entity{
public:
  Entity();
  ~Entity();

  virtual void move();

  //getters
  float getX();
  float getY();

  //setters
  void setX(float x_);
  void setY(float y_);

private:
  Position pos; //where it is
  double speed; //for future purposes;
  double property; //growht rate and energy
}

#endif
