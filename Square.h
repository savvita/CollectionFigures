#pragma once
#include"Figure.h"


class Square :public Figure
{
protected:
	unsigned int size;

public:
	Square();
	Square(int x, int y, unsigned int size);

	//gets
	inline unsigned int getSize() const
	{
		return this->size;
	}

	//sets
	inline void setSize(unsigned int size)
	{
		this->size = size;
	}

	std::string getInfo() const;
};