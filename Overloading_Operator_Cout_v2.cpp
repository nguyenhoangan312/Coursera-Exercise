#include <iostream>

using namespace std;

typedef enum days{SUN,MON,TUE,WED,THU,FRI,SAT} d;

inline days operator++  (days& d) // pfrefix operator
{
	d= static_cast<days>((static_cast<int>(d)+1)%7);
return d;
}

inline days operator++ (days& d,int) // postfix operator
{
 days e = d;
d = static_cast<days>((static_cast<int>(d)+1)%7);
return e;
}

inline days operator-- (days& d) // pfrefix operator
{
	if (d == SUN)
	{
		d= SAT;
	}
	else
	{
		d= static_cast<days>(static_cast<int>(d)-1);
	}
return d;
}

inline days operator-- (days& d,int) // postfix operator
{
days e=d;
if (d == SUN)
	{
		d= SAT;
	}
	else
	{
		d= static_cast<days>(static_cast<int>(d)-1);
	}
return e;
}




ostream& operator<< (ostream& os,days& d)
{
	switch(d)
	{
	case SUN: os<< "SUN"; break;
	case MON: os<< "MON"; break;
	case TUE: os<< "TUE"; break;
	case WED: os<< "WED"; break;
	case THU: os<< "THU"; break;
	case FRI: os<< "FRI"; break;
	case SAT: os<< "SAT"; break;
	}
	return os;
}



int main()
{
	days m=SUN,a,b,c,d;
a=m++;
cout<< a <<"\t" << m<< endl;
b=++m;
cout << b << "\t" << m << endl;
c=m--;
cout << c << "\t" << m<< endl;
d = --m;
cout << d <<"\t" << m << endl;
}
