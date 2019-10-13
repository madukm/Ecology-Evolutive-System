#ifndef ENTITY_H
#define ENTITY_H

Class Entity{
  public:
    Entity();
    void inicialize_entity();
    float get_distance();
    std::pair <int, int> which_position();
    virtual void move();
  private:
    std::pair <int, int> position; //where it is
    double speed; //for future purposes;
    double property; //growht rate and energy
}

Class Carnivore:public Entity{
  public:
    void move();
}

Class Herbivore:public Entity{

}

Class Plant:public Entity{

}

CLass Nothing:public Entity{

}

#endif
