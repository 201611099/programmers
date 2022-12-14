#include <map>
#include <string>
#include <iostream>
#include <utility>

using namespace std;

int main(void)
{
	map<string, int> m = {{"first", 1}, {"second", 3}};
	for (pair<string, int> p: m)
		cout << p.first << " " << p.second << endl;
	/* c++17
	for (auto &[a, b]: m)
		cout << a << " " << b << endl;
	*/
	return (0);
}