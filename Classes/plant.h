#ifndef PLANT_H
#define PLANT_H
#include "utils.h"
#include "position.h"
#include "parameters.h"
#include "entity.h"
#include "reference.h"

using namespace std;

class Plant : public Entity
{
public:
  Plant(float x, float y, float angle);
  ~Plant();

  void move();

private:
  Position *pos;
};
