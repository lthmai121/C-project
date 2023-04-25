#include <iostream>
using namespace std;
int main()
{
	double side;
	cout << "Enter the side of the cube:";
	cin >> side;
	double volume = side * side * side;
	cout << "Cube volume: " << volume << endl;
	double cost, price, profit, cubes;
		cost = 0.25;
		price = 0.3;
		cubes = 531;
		profit = (price - cost) * cubes;
	cout << "Profit: " << profit << endl;
}
