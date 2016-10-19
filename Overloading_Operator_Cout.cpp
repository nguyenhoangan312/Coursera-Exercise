#include <iostream>

using namespace std;

typedef enum days{SUN,MON,TUE,WED,THU,FRI,SAT} d;

inline days operator++  (days d) 
{
	return static_cast<days>((static_cast<int>(d)+1)%7);
}

inline days operator-- (days d)
{
	if (d == SUN)
	{
		return SAT;
	}
	else
	{
		return static_cast<days>(static_cast<int>(d)-1);
	}
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
	days m=MON,t,su, sa;
	t=++m;
su=--m;
sa=--su;
	cout << "m= " << m << " t = " << t << " su = " << su << " sa = " << sa<< endl;
}
