#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

vector<string> split(string org, char del)
{
	vector<string> ret;
	stringstream ss(org);
	string temp;

	while (getline(ss, temp, del))
		ret.emplace_back(temp);
	return ret;
}

int main(void)
{
	string str = "hello my name is blabla.";
	for (string s: split(str, ' '))
		cout << s << endl;
}