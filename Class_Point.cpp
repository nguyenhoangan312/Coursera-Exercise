#include <iostream>

using namespace std;

class point
{
	public:
	double x,y;
};

inline point operator+(point& p1, point& p2)
{
	return {p1.x+p2.x, p1.y+p2.y};
}

inline point operator+= (point& p1, point& p2)
{
	p1.x=p1.x+p2.x;
	p1.y=p1.y+p2.y;
	return p1;
}

ostream& operator<< (ostream& os, const point& p)
{
	os << "(" << p.x << "," << p.y << ")";
	return os;
}

int main()
{
	point p1 = {1.5,2}, p2={3,4.5};
	cout << (p1 + p2) << endl;	
	p1 += p2;
	cout << p1 << endl;
}