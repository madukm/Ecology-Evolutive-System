#include "entity.h"
#include "world.h"

using namespace std;

Entity::Entity(float x_, float y_){
  pos = new Position(x_, y_);
}

Entity::~Entity(){}

void Entity::move(void){}

char Entity::get_type(){
  return type;
}
void Entity::set_type(char c){
  type = c;
}

Position* Entity::get_position(){
  return pos;
}

void Entity::set_position(float x, float y){
  pos->setX(x);
  pos->setY(y); 
}
