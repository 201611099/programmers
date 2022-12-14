#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<int> a = {1, 2, 3, 4, 5, 100, 1000};

	cout << distance(a.begin(), upper_bound(a.begin(), a.end(), 1000)) << endl;
	cout << distance(a.begin(), lower_bound(a.begin(), a.end(), 1000)) << endl;
	cout << boolalpha << binary_search(a.begin(), a.end(), 5) << endl;
}