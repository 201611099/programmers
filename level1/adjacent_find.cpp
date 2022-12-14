#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
	vector<int> vec = {1, 2, 3, 4, 1, 2, 3, 2, 3, 4};
	vector<int> vec2(vec.size());

	auto it = adjacent_find(vec.begin(), vec.end());
	cout << distance(vec.begin(), it) << endl;

	adjacent_difference(vec.begin(), vec.end(), vec2.begin(), [] (int a, int b) { return a - b;});
	for (int i: vec2)
		cout << i << " ";
	cout << endl;
	return (0);
}
