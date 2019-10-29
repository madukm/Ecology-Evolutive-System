#ifndef WORLD_H
#define WORLD_H

#include "position.h"
#include "reference.h"
#include "entity.h"

class World{
  public:
    World(int m, int n);
    void random_world(void);
    Entity *get_entity(Position *curr);

  private:
    vector<vector <Entity*> > map;
};


#endif
