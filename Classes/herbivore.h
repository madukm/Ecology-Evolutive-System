#ifndef HERBIVORE_H
#define HERBIVORE_H
#include "utils.h"
#include "position.h"
#include "parameters.h"
#include "entity.h"
#include <vector>
using namespace std;

class Herbivore : public Entity
{
public:
  Herbivore(float x, float y, int algle);
  ~Herbivore();

  void move();

private:
  Position *pos;
};
