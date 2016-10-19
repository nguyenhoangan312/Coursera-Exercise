#include <iostream>
using namespace std;

template<class summable1, class summablel2>
summable1 sum(const summable1 data[],int size,summablel2 s)
{	
summable1 s1 = static_cast<summable1> (s);
for (int i=0;i<size;i++)
{
s1+= data[i];
}
return s1;
}
int main()
{
int array1[5]={1,2,3,4,5};
double array2[3]={1.2,2.3,3.4};
int sum1=sum (array1,5,0);
cout<< "sum1 = "<<sum1<<endl;
double sum2=sum(array2,3,0);
cout<<" sum2 = "<<sum2<<endl;
sum2=sum(array2,3,sum1);
cout<<" sum2 = "<<sum2<<endl;
sum2=sum(array2,3,sum (array1,5,0));
cout<<" sum2 = "<<sum2<<endl;
}


