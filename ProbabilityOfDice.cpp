//The following program computes
//the probability for dice possibilities

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int sides = 6;
inline int r_side() {return (rand()%6)+1;}

int main()

{
	
srand(clock());
cout <<"\nPlease enter the number of trials: ";
int trials,n_dice,sum;
cin >> trials;
cout <<"\nEnter the number of times for dice: ";
cin >> n_dice;
int* outcomes = new int[n_dice*sides +1];


cout <<"\nProbability:" << endl;


for (int i = 0; i < trials; i++)
{
	sum = 0;
	for (int j = 0; j < n_dice; j++)
	{
		sum += r_side();
	}
	outcomes[sum] ++;	
}

for (int i = n_dice; i < n_dice*sides +1; i ++)
{
	cout << "\n i = " << i << " p = " << static_cast<double> (outcomes[i])/trials<< endl;
}

}