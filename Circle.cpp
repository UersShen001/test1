#include"Circle.h"

void Circle::setValue(int _r,int _x0,int _y0)
{
	r=_r;
	x0=_x0;
	y0=_y0;
}

int Circle::getr()
{
	return r;
}

int Circle::getx0()
{
	return x0;
}

int Circle::gety0()
{
	return y0;
}

int Circle::Judgement(Circle &c)
{
	int x=x0-c.getx0();
	int y=y0-c.gety0();
	int l=x*x+y*y;
	if(l>(r+c.getr())*(r+c.getr()))
		return 1;
	if(l==(r+c.getr())*(r+c.getr()))
		return 2;
	if(l<(r+c.getr())*(r+c.getr()))
	{
		if((l>r)||(l>c.getr()))
			return 3;
		if((l<r)||(l<c.getr()))
			return 4;
	}
}