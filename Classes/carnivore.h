#ifndef CARNIVORE_H
#define CARNIVORE_H
#include "utils.h"

class Carnivore: public Entity{
public:
  Carnivore();
  ~Carnivore();

  void move();
private:
  Position last;
}
