#pragma once

class Circle
{
public:
	void setValue(int _r,int _x0,int _y0);
	int getr();
	int getx0();
	int gety0();
	int Judgement(Circle &c1);
private:
	int r;
	int x0;
	int y0;
};