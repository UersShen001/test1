/*
��дc++����������¹��ܣ�
(1)����һ��Point�࣬�����԰���������꣬�ṩ��������֮�����ķ���
(2)����һ��Բ���࣬�����԰���Բ�ĺͰ뾶
(3)��������Բ�ζ�����ʾ�û�����Բ�ĺͰ뾶���ж�����Բ�Ƿ��ཻ����������
*/

#include<iostream>
#include"Circle.h"
#include"Point.h"
using namespace std;

int main()
{
	Point p1,p2;
	int a1,b1,a2,b2;
	cout<<"Point��,������֮��ľ���:<<endl";
	cout<<"�������һ���������:";
	cin>>a1>>b1;
	cout<<"������ڶ����������:";
	cin>>a2>>b2;
	p1.getP(a1,b1);
	p2.getP(a2,b2);
	cout<<"����֮��ľ���Ϊd="<<p1.Distance(p2)<<endl;

	cout<<"Circle��,������Բ֮���λ�ù�ϵ:<<endl";
	Circle c1,c2;
	int r1,x1,y1,r2,x2,y2;
	cout<<"�������һ��Բ����Ϣ:"<<endl;
	cout<<"r1=";
	cin>>r1;
	cout<<"����:";
	cin>>x1>>y1;
	cout<<"������ڶ���Բ����Ϣ:"<<endl;
	cout<<"r2=";
	cin>>r2;
	cout<<"����:";
	cin>>x2>>y2;
	c1.setValue(r1,x1,y1);
	c2.setValue(r1,x1,y1);
	int tag=c1.Judgement(c2);
	if(tag==1)
		cout<<"����"<<endl;
	if(tag==2)
		cout<<"����"<<endl;
	if(tag==3)
		cout<<"�ཻ"<<endl;
	if(tag==4)
		cout<<"����"<<endl;
	return 0;
}

/*
#include<iostream>
#include<math.h>
using namespace std;

//����
class MyPoint
{
public:
	double x;
	double y;
public:
	void Key(double &x, double &y) {
		cout << "�����������꣺" << endl;
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

//Բ��
class MyCircle
{
public:
	double r;
	double x;
	double y;
public:
	void Key(double &r, double &x, double &y) {
		cout << "������Բ�İ뾶��" << endl;
		cin >> r;
		cout << "������Բ�����꣺" << endl;
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
		//��Բ��֮��ľ��룺
		double L;
		double x;
		double y;
		x = c_x - c1.setX();
		y = c_y - c1.setY();
		L = x * x + y * y;
		if (L>(c_r + c1.setR())*(c_r + c1.setR())) {
				return 1;//����
		}
		if (L==(c_r + c1.setR())*(c_r + c1.setR())) {
				return 2;//����
		}
		if (L<(c_r + c1.setR())*(c_r + c1.setR())) {
			if ((c_r - c1.setR() > 0)&&c_r-L>0) {
				return 3;//����
			}
			if ((c_r - c1.setR() < 0 && c1.setR() - L > 0))
				return 3;//����
			return 4;    // �ཻ
 
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
	cout<<"�����ľ���"<<p1.Distance(p2)<<endl;
	
	MyCircle c1,c2;
	c1.Key(c1.r, c1.x, c1.y);
	c2.Key(c2.r, c2.x, c2.y);
	c1.getRXY(c1.r, c1.x, c1.y);
	c2.getRXY(c2.r, c2.x, c2.y);
	if (c1.Judgement(c2) == 1) {
		cout << "����Բ�Ĺ�ϵ������" << endl;
	}
	if (c1.Judgement(c2) == 2) {
		cout << "����Բ�Ĺ�ϵ������" << endl;
	}
	if (c1.Judgement(c2) == 3){
		cout << "����Բ�Ĺ�ϵ�ǰ���" << endl;
	}
	if (c1.Judgement(c2) == 4) {
		cout << "����Բ�Ĺ�ϵ���ཻ" << endl;
	}
	return 0;
}*/