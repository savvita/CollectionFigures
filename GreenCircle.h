#pragma once
#include"Circle.h"

class GreenCircle :
    public Circle
{
public:
    GreenCircle() : Circle(0, 0, 0, "Green")
    {

    }
    GreenCircle(int x, int y, unsigned int radius) : Circle(x, y, radius, "Green")
    {

    }
};