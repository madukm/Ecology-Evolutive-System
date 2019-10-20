#ifndef UTILS_H
#define UTILS_H

#include "entity.h"

namespace utils{
double get_distance(Entity *e1, Entity *e2);
Position checkLocation(Position p1, Position p2);
}

#endif
