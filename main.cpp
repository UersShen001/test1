/*
编写c++程序完成以下功能：
(1)定义一个Point类，其属性包括点的坐标，提供计算两点之间距离的方法
(2)定义一个圆形类，其属性包括圆心和半径
(3)创建两个圆形对象，提示用户输入圆心和半径，判断两个圆是否相交，并输出结果
*/

#include<iostream>
#include"Circle.h"
#include"Point.h"
using namespace std;

int main()
{
	Point p1,p2;
	int a1,b1,a2,b2;
	cout<<"Point类,测两点之间的距离:<<endl";
	cout<<"请输入第一个点的坐标:";
	cin>>a1>>b1;
	cout<<"请输入第二个点的坐标:";
	cin>>a2>>b2;
	p1.getP(a1,b1);
	p2.getP(a2,b2);
	cout<<"两点之间的距离为d="<<p1.Distance(p2)<<endl;

	cout<<"Circle类,测两个圆之间的位置关系:<<endl";
	Circle c1,c2;
	int r1,x1,y1,r2,x2,y2;
	cout<<"请输入第一个圆的信息:"<<endl;
	cout<<"r1=";
	cin>>r1;
	cout<<"坐标:";
	cin>>x1>>y1;
	cout<<"请输入第二个圆的信息:"<<endl;
	cout<<"r2=";
	cin>>r2;
	cout<<"坐标:";
	cin>>x2>>y2;
	c1.setValue(r1,x1,y1);
	c2.setValue(r1,x1,y1);
	int tag=c1.Judgement(c2);
	if(tag==1)
		cout<<"相离"<<endl;
	if(tag==2)
		cout<<"相切"<<endl;
	if(tag==3)
		cout<<"相交"<<endl;
	if(tag==4)
		cout<<"包含"<<endl;
	return 0;
}

/*
#include<iostream>
#include<math.h>
using namespace std;

//点类
class MyPoint
{
public:
	double x;
	double y;
public:
	void Key(double &x, double &y) {
		cout << "请输入点的坐标：" << endl;
		cin >> x;
		cin >> y;
	}
public:
	void getXY(double x, double y) {
		p_x = x;
		p_y = y;
	}
	double setX() {
		return p_x;
	}
	double setY() {
		return p_y;
	}
public:
	double Distance(MyPoint &p1) {
		double x;
		double y;
		x = p_x - p1.setX();
		y = p_y - p1.setY();
		return sqrt(x*x + y * y);
	}
private:
	double p_x;
	double p_y;
};

//圆类
class MyCircle
{
public:
	double r;
	double x;
	double y;
public:
	void Key(double &r, double &x, double &y) {
		cout << "请输入圆的半径：" << endl;
		cin >> r;
		cout << "请输入圆的坐标：" << endl;
		cin >> x;
		cin >> y;
	}
public:
	void getRXY(double r, double x, double y) {
		c_r = r;
		c_x = x;
		c_y = y;
	}
	double setX() {
		return c_x;
	}
	double setY() {
		return c_y;
	}
	double setR() {
		return c_r;
	}
public:
	int Judgement(MyCircle &c1) {
		//两圆心之间的距离：
		double L;
		double x;
		double y;
		x = c_x - c1.setX();
		y = c_y - c1.setY();
		L = x * x + y * y;
		if (L>(c_r + c1.setR())*(c_r + c1.setR())) {
				return 1;//相离
		}
		if (L==(c_r + c1.setR())*(c_r + c1.setR())) {
				return 2;//相切
		}
		if (L<(c_r + c1.setR())*(c_r + c1.setR())) {
			if ((c_r - c1.setR() > 0)&&c_r-L>0) {
				return 3;//包含
			}
			if ((c_r - c1.setR() < 0 && c1.setR() - L > 0))
				return 3;//包含
			return 4;    // 相交
 
		}	
	}
private:
	double c_r;
	double c_x;
	double c_y;
};
 
int main()
{
	
	MyPoint p1, p2;
	p1.Key(p1.x, p1.y);
	p2.Key(p2.x, p2.y);
	p1.getXY(p1.x, p1.y);
	p2.getXY(p2.x, p2.y);
	cout<<"两点间的距离"<<p1.Distance(p2)<<endl;
	
	MyCircle c1,c2;
	c1.Key(c1.r, c1.x, c1.y);
	c2.Key(c2.r, c2.x, c2.y);
	c1.getRXY(c1.r, c1.x, c1.y);
	c2.getRXY(c2.r, c2.x, c2.y);
	if (c1.Judgement(c2) == 1) {
		cout << "两个圆的关系是相离" << endl;
	}
	if (c1.Judgement(c2) == 2) {
		cout << "两个圆的关系是相切" << endl;
	}
	if (c1.Judgement(c2) == 3){
		cout << "两个圆的关系是包含" << endl;
	}
	if (c1.Judgement(c2) == 4) {
		cout << "两个圆的关系是相交" << endl;
	}
	return 0;
}*/