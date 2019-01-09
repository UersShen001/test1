//#ifndef _POINT_H_
//#define _POINT_H_
#pragma once

class Point
{
public:
	void getP(int _x1,int _y1);
	int getx();
	int gety();
	double Distance(Point &p1);
private:
	int x1;
	int y1;
};

//#endif