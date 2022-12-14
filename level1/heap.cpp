#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(void)
{
	vector<int> vec = {1, 2, 4, 5, -1};
	cout << boolalpha << is_heap(vec.begin(), vec.end(), [] (int a, int b) { return a > b;}) << endl;
	cout << boolalpha << *is_heap_until(vec.begin(), vec.end(), [](int a, int b) { return a > b;}) << endl;
	make_heap(vec.begin(), vec.end());
	for (int i: vec)
		cout << i << " ";
	cout << endl;
	return 0;
}