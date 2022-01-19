#include "Figures.h"

int main()
{
	FiguresCollection f;
	f.add(new Figure());
	f.add(new Circle(1, 1, 1, "Blue"));
	f.add(new RedCircle(2, 2, 4));
	f.add(new GreenCircle(3, 3, 9));
	f.add(new Square(4, 4, 16));
	f.add(new Rhombus(5, 5, 25, 25));
	f.print();

}