#include <iostream>
using namespace std;

template<class summable>
summable sum(const summable data[],int size,summable s=0)
{
for (int i=0;i<size;i++)
{
s+= data[i];
}
return s;
}
int main()
{
int array1[5]={1,2,3,4,5};
double array2[3]={1.2,2.3,3.4};
int sum1=sum (array1,5);
cout<< "sum1 = "<<sum1<<endl;
double sum2=sum(array2,3);
cout<<" sum2 = "<<sum2<<endl;
sum2=sum(array2,3,static_cast<double> (sum1);
cout<<" sum2 = "<<sum2<<endl;
sum2=sum(array2,3,static_cast<double> (sum (array1,5)));
cout<<" sum2 = "<<sum2<<endl;
}


