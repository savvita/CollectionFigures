#include "FiguresCollection.h"

FiguresCollection::FiguresCollection() :head { NULL }
{
}

void FiguresCollection::add(Figure* pf)
{
	if (this->head == NULL)
	{
		this->head = new Node(pf);
		return;
	}

	Node* tmp = this->head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new Node(pf);
}

void FiguresCollection::print()
{
	Node* tmp = this->head;
	while (tmp != NULL)
	{
		std::cout << tmp->f->getInfo() << "\n";
		std::cout << "========================\n";
		tmp = tmp->next;
	}
}

FiguresCollection::~FiguresCollection()
{
	Node* tmp = this->head;
	while (tmp != NULL)
	{
		Node* tmp2 = tmp;
		tmp = tmp->next;
		delete tmp2;
	}
}