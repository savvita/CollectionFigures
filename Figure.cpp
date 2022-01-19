#include "Figure.h"

Figure::Figure() :x{ 0 }, y{ 0 }
{
}

Figure::Figure(int x, int y) : x{ x }, y{ y }
{
}

std::string Figure::getInfo() const
{
	std::string res = "X: ";
	res += std::to_string(this->x);
	res += " Y: ";
	res += std::to_string(this->y);
	return res;
}
