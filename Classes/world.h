#ifndef WORLD_H
#define WORLD_H

Class World{
  public:
    World(int m, int n);
    void random_world(void);

  private:
    vector<vector<Entity*>> map;
}


#endif
