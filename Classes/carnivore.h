#ifndef CARNIVORE_H
#define CARNIVORE_H
#include "utils.h"
#include "position.h"
#include "parameters.h"
#include "entity.h"
#include <vector>
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
