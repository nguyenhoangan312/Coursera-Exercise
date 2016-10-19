#include <iostream>

using namespace std;

class point
{
	public:
	void setx(double v){x=v;}
	double getx(){return x;}
	void sety(double v){y=v;}
	double gety(){return y;}
	point():x(0.0),y(0.0){} //default constructure
	point(double x, double y):x(x),y(y){};
	
	private:
	double x,y;
};

ostream& operator<< (ostream& os,  point& p)
{
	os << "(" << p.getx() << "," << p.gety()<< ")";
	return os;
}

point operator+ ( point& p1,  point& p2)
{
	return {p1.getx()+p2.getx(), p1.gety()+p2.gety()};
}

point operator+= (point& p1,  point& p2)
{
	p1.setx(p1.getx()+p2.getx());
	p1.sety(p1.gety()+p2.gety());
	return p1;
}

int main()
{
	point p1 (1.5,2), p2(3,4.5),p;
	p = p1+p2;
	cout << p << endl;	
	p1 += p2;
	cout << p1 << endl;
}
