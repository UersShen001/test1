#include"Point.h"

void Point::getP(int _x1,int _y1)
{
	x1=_x1;
	y1=_y1;
}

int Point::getx()
{
	return x1;
}

int Point::gety()
{
	return y1;
}

double Point::Distance(Point &p1)
{
	double x=x1-p1.getx();
	double y=y1-p1.gety();
	return x*x+y*y;
}