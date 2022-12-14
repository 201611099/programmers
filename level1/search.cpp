#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> a;
	vector<int> b;
	
	a.assign({1, 2, 3, 1, 2, 1, 3, 1, 2, 3, 1, 2, 3, 1});
	b.assign({1, 2, 3, 1});
	// a.push_back(1);
	// a.push_back(1);
	// a.push_back(2);
	// a.push_back(3);
	// a.push_back(1);
	// a.push_back(1);
	// a.push_back(1);
	// a.push_back(1);

	// b.push_back(1);
	// b.push_back(2);
	// b.push_back(3);
	// b.push_back(1);
	vector<int>::iterator it = search(a.begin(), a.end(), b.begin(), b.end());
	if (it == a.end())
		cout << "can't find" << endl;
	else
		cout << distance(a.begin(), it) << endl;
	return 0;
}