#include <iostream>
using namespace std;

void getRooms(int&);
void getPricePaint(float& p);
void getRoomSpace(int n, double& s);
void print_dt(int n, float c, double s);

int main()
{
	int n;
	float p;
	double s;
	getRooms(n);
	getPricePaint(p);
	getRoomSpace(n, s);
	print_dt(n, p, s);

}
void getRooms(int &n)
{
	cout << "Number of rooms\n";
	cin >> n;
	while (n<1)
	{
		cout << "Invalid\n";
		cin >> n;
	}
}
void getRoomSpace(int n, double &s)
{
	s = 0;
	for (int i = 0; i<n; i++)
	{
		int temp;
		cout << "Enter space of room " << i + 1 << ": ";
		cin >> temp;
		while (temp<0)
		{
			cout << "Invalid\n";
			cin >> temp;
		}
		s += temp;
	}

}
void getPricePaint(float &p)
{
	cout << "Enter Paint Price: \n";
	cin >> p;
	while (p < 10.0)
	{
		cout << "Invalid\n";
		cin >> p;
	}
}
void print_dt(int n, float c, double s)
{
	cout << "The number of gallons of paint required\n" << s / 110 << endl;
	cout << "The hours of labor required: \n" << s / 110 * 8 << endl;
	float totalPaintCost = s / 110 * c;
	float totalLaborCost = s / 110 * 8 * 25;
	cout << "The cost of the paint: \n" << totalPaintCost << endl;
	cout << "The labor charges:\n" << totalLaborCost << endl;
	cout << "The total cost of the paint job:\n" << totalPaintCost + totalLaborCost;
}