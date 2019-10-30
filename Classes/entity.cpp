#include "entity.h"

using namespace std;

Entity::Entity(float x_, float y_){
  pos = new Position(x_, y_);
}

Entity::~Entity(){}

void Entity::move(void){}

char Entity::get_type(){
  return type;
}
