#ifndef ENTITY_H
#define ENTITY_H

#include "position.h"
#include "reference.h"

class Entity{
public:
  Entity(float x_, float y_);
  ~Entity();

  virtual void move();

  //----- Getter and Setter -----//
  char get_type();
  void set_type(char c);
  Position *get_position();
  void set_position(float x, float y);

protected:
  Position *pos; //where it is
  char type; //'C' for carnivore, 'H' for herbivore, 'P' for plant
  float speed; //for future purposes;
  float property; //growht rate and energy
};

#endif // ENTITY_H
