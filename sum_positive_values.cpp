#include<iostream>
using namespace std;
int main()
{
	int result, n = 0;
	cout << "Enter the positive integer value\n";
	cin >> n;
	result = n;
	for (int i = 0; i < n;i++)
	{
		result += i;
	}
	cout << result;
}
