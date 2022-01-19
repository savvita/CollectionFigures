#include "Rhombus.h"

Rhombus::Rhombus() :Square(), diagonal{ 0 }
{
}

Rhombus::Rhombus(int x, int y, unsigned int size, unsigned int diagonal) : Square(x, y, size), diagonal{ 0 }
{
	this->setDiagonal(diagonal);
}

std::string Rhombus::getInfo() const
{
	std::string res = Square::getInfo();
	res += "\nDiagonal: ";
	res += std::to_string(this->diagonal);
	return res;
}
