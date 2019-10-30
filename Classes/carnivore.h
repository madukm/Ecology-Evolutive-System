#ifndef CARNIVORE_H
#define CARNIVORE_H

#include "entity.h"

using namespace std;

class Carnivore : public Entity
{
public:
  Carnivore(float x, float y, float angle);
  ~Carnivore();

  void move();

private:
  Position *pos;
};

#endif // CARNIVORE_H
