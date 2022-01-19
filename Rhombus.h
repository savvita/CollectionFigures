#pragma once
#include "Square.h"

class Rhombus :
    public Square
{
protected:
    unsigned int diagonal;

public:
    Rhombus();
    Rhombus(int x, int y, unsigned int size, unsigned int diagonal);

    //gets
    inline unsigned int getDiagonal() const
    {
        return this->diagonal;
    }

    //sets
    inline void setDiagonal(unsigned int diagonal)
    {
        if (diagonal < 2 * this->size)
            this->diagonal = diagonal;
    }

    std::string getInfo() const;

};