#ifndef POSITION_H
#define POSITION_H

#include "reference.h"

class Position{
public:
    Position(float _x, float _y);
    ~Position();
    float distanceTo(Position *other);
    float angleTo(Position *other);
    //----- Getters and Setters -----//
    float getX() const;
    void setX(float value);
    float getY() const;
    void setY(float value);
    void setNewPosition(float _x, float _y);

private:
    float x;
    float y;
};

#endif // POSITION_H
