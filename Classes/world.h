#ifndef WORLD_H
#define WORLD_H

#include "reference.h"
#include "entity.h"

class World{
  public:
    World(int n);
    void random_world(void);

    //----Getters and Setter----//
    int get_size() const;
    std::vector<Entity *> population;
  private:
    int size;
};


#endif // WORLD_H
