#pragma once
#include"Circle.h"

class RedCircle :
    public Circle
{
public:
    RedCircle() : Circle(0, 0, 0, "Red")
    {

    }
    RedCircle(int x, int y, unsigned int radius) : Circle(x, y, radius, "Red")
    {

    }
};
