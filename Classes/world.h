#ifndef WORLD_H
#define WORLD_H

#include "reference.h"
#include "entity.h"

class World{
  public:
    World(int n);
    void random_world(void);

    //----Getters and Setter----//
    float get_size() const;
    std::vector<Entity *> get_population();


  private:
    float size;
    std::vector<Entity *> population;
};


#endif // WORLD_H
