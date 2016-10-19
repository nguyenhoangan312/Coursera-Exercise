#include <iostream>
#include <complex>
using namespace std;

template <class Temp>
void myswap(Temp& x, Temp& y) //function name should be different from "swap" which has been defined by complier
{
Temp temp=x;
x=y;
y=temp;
}

int main()
{
int a=2, b= 3;
double c = 2.3, d=4.5;
complex<double> e(2.3,4.5), f(6.7,8.9);
cout << "input: a="<<a<<",b=" <<b<<endl;
myswap(a,b);
cout<< "output:a="<<a<<",b=" <<b<<endl;
cout <<"input: c="<<c<<" d=" <<d<<endl;
myswap(c,d);
cout <<"output: c="<<c<<"d="<<d<<endl;
cout <<"input: e="<<e<<" f=" <<f<<endl;
myswap(e,f);
cout <<"output: e="<<e<<"f="<<f<<endl;
cout <<"now, swap by functon swap of compiler..."<<endl;
swap(e,f); //swap function of compiler
cout <<"output: e="<<e<<"f="<<f<<endl;
}
