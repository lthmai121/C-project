#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please give full answer yes or no in the following questions\n";
	string veg, vegan, gluten_free;
	cout << "Is anyone in your party a vegetarian?\n";
	cin >> veg;
	cout << "Is anyone in your party a vegan?\n";
	cin >> vegan;
	cout << "Is anyone in your party is gluten free?\n";
	cin >> gluten_free;
	if (veg == "no" && vegan == "no" && gluten_free == "no")
	{
		cout << "Here are your restaurant choice\n";
		cout << "Gourmet Burgers\n";
	}
	else if (veg == "yes" && vegan == "yes" && gluten_free == "yes")
	{	
		cout << "Here are your restaurant choices:\n";
		cout << "Corner Cafe\n";
		cout << "Chef's Kitchen\n";
	}
	else if (veg == "yes" && vegan == "yes" && gluten_free == "no")
	{
		cout << "Here are your restaurant choices:\n";
		cout << "Main Street Pizza Company\n";
	}
	else if (veg == "yes" && vegan == "no" && gluten_free == "yes")
	{
		cout << "Here are your restaurant choices:\n";
		cout << "Corner Cafe, Mama's Fine Italian, Chef's Kitchen\n";
	}
	else if (veg == "yes" && vegan == "no" && gluten_free == "no")
	{
		cout << "Here are your restaurant choices:\n";
		cout << "Main Street Pizza Company, Corner Cafe, Mama's Fine Italian, Chef's Kitchen\n";
	}
	else if (veg == "no" && vegan == "yes" && gluten_free == "yes")
	{
		cout << "Here are your restaurant choices:\n";
		cout << "Main Street Pizza Company, Corner Cafe, Chef's Kitchen\n";
	}
	else if (veg == "no" && vegan == "yes" && gluten_free == "no")
	{
		cout << "Here are your restaurant choices:\n";
		cout << "Main Street Pizza Company, Corner Cafe, Chef's Kitchen\n";
	}
	else if (veg == "no" && vegan == "no" && gluten_free == "yes")
	{
		cout << "Here are your restaurant choices:\n";
		cout << "Corner Cafe, Mama's Fine Italian, Chef's Kitchen\n";
	}
}