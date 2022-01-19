#include "Square.h"

Square::Square() : Figure(), size{ 0 }
{
}

Square::Square(int x, int y, unsigned int size) : Figure(x, y), size{ size }
{
}

std::string Square::getInfo() const
{
	std::string res = Figure::getInfo();
	res += "\nSize: ";
	res += std::to_string(this->size);
	return res;
}