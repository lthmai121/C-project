#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> a, int target, int &counter);
int binarySearch(vector<int> a, int target, int &counter);

int main()
{
	int count1=0, count2 = 0;
	vector<int> a = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	int res1 = linearSearch(a, 19, count1);
	int res2 = binarySearch(a,19, count2);
	cout << "Position: " << res1 << endl;
	cout << "Linear Search counter = " << count1 << endl;
	cout << "Position: " << res2 << endl;
	cout << "Binary Search counter = " << count2 << endl;

}

int linearSearch(vector<int> a, int target, int &counter)
{
	for (int i = 0; i < 20; i++) {
		counter++;
		if (target == a[i])
			return i;
	}
	return -1;
}

int binarySearch(vector<int> a, int target, int &counter) {
	int len = a.size();
	int left = 0;
	int right = len - 1;

	while (left <= right) {
		int mid = (left + right)/ 2;
		counter++;
		if (a[mid] == target)
			return mid;
		if (a[mid] < target)
			left = mid + 1;
		else if (a[mid] > target)
			right = mid - 1;
	}

	return -1;
}
