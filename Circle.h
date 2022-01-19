#pragma once
#include"Figure.h"

class Circle :
    public Figure
{
protected:
    unsigned int radius;
    std::string color;

public:
    Circle();
    Circle(int x, int y, unsigned int radius);
    Circle(int x, int y, unsigned int radius, std::string color);

    //gets
    inline unsigned int getRadius() const
    {
        return this->radius;
    }
    inline std::string getColor() const
    {
        return this->color;
    }

    //sets
    inline void setRadius(unsigned int radius)
    {
        this->radius = radius;
    }

    std::string getInfo() const;
};

