#include <numeric>
#include <vector>
#include <iostream>

using namespace std;

int main(void)
{
	vector<int> vec(10);

	iota(vec.begin(), vec.end(), 1);
	for (int i: vec)
		cout << i << " ";
	cout << endl;
}