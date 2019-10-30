#ifndef PLANT_H
#define PLANT_H

#include "entity.h"
#include "reference.h"

using namespace std;

class Plant : public Entity
{
public:
  Plant(float x, float y);
  ~Plant();

  void move();

private:
  Position *pos;
};

#endif //PLANT_H
