#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void print(int i)
{
	cout << i << " ";
}

int inc(void)
{
	static int i = 0;

	return ++i;
}

int main(void)
{
	vector<int> vec(10, 0);
	fill(vec.begin(), vec.end(), 1);
	for_each(vec.begin(), vec.end(), print);
	cout << endl;

	generate(vec.begin(), vec.end(), inc);
	for_each(vec.begin(), vec.end(), print);
	cout << endl;
}