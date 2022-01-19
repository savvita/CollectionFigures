#pragma once
#include"Figure.h"

struct Node
{
	Figure* f;
	Node* next;
	Node(Figure* f)
	{
		this->f = f;
		this->next = NULL;
	}
};

class FiguresCollection
{
private:
	Node* head;

public:
	FiguresCollection();

	void add(Figure* pf);

	void print();

	~FiguresCollection();
};

