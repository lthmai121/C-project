#include <iostream>
using namespace std;

void getScore(int &s1);
void calcAverage(int a,int b,int c,int d,int e);
int findLowest(int a, int b, int c, int d, int e);

int main1()
{
	int a, b, c, d, e;
	cout << "Type 5 scores\n";
	getScore(a);
	getScore(b);
	getScore(c);
	getScore(d);
	getScore(e);
	cout << "The average score: \n";
	calcAverage(a,b,c,d,e);
	return 0;
}
void getScore(int& s1)
{
	cin >> s1;
	while (s1 < 0 || s1>100)
	{
		cout << "Invalid\n";
		cin >> s1;
	}
}
int findLowest(int a, int b, int c, int d, int e)
{
	int min = INFINITY;
	if (a < min)
	{
		min = a;
	}
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}
	if (d < min)
	{
		min = d;
	}
	if (e < min)
	{
		min = e;
	}
	return min;
}
void calcAverage(int a, int b, int c, int d, int e)
{
	int r=0;
	int m=findLowest(a,b,c,d,e);
	if (a != m)
	{
		r += a;
	}
	if (b != m)
	{
		r += b;
	}

	if (c != m)
	{
		r += c;
	}
	if (d != m)
	{
		r += d;
	}
	if (e != m)
	{
		r += e;
	}
	r = r / 4;
	cout << r << endl;

}