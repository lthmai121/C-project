#include <iostream>
#include <cstdlib>
using namespace std;

int toPoint(int dice);
void dice(int v[]);
int main()
{
	int v[6];
	int total = 0;
	cout << "Tap enter to roll the dice\n";
	system("pause");
	dice (v);
	for (int i = 0; i < 6; i++)
	{
		total += total + toPoint(v[i]);
	}
	cout << total << endl;
	if (total <= 180)
	{
		cout << "Great\n";
	}
	else
		cout << "Try again\n";

}

void dice(int v[])
{
	srand(time(NULL));
	for  (int i = 0; i < 6; i++)
	{
		v[i]= rand () %6+1;
	}
}
int toPoint(int dice)
{
	switch (dice)
	{
	case 1: 
	{
		return 60;
	}
	case 2:
	{
		return 50;
	}
	case 3:
	{
		return 40;
	}
	case 4:
	{
		return 30;
	}
	case 5:
	{
		return 20;
	}
	case 6:
	{
		return 10;
	}
	}

}