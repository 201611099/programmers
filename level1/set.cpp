#include <set>
#include <iostream>

using namespace std;

int main(void)
{
	set<int> s = {1, 2, 3, 4, 5, 1, 23};
	for (int i: s)
		cout << i << " ";
	cout << endl;

	s.insert(23);
	for (int i: s)
		cout << i << " ";
	cout << endl;
	s.erase(23);
	for (int i: s)
		cout << i << " ";
	cout << endl;
}