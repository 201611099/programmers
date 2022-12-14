#include <iostream>
#include <vector>
#include <string>
#include <locale>
#include <algorithm>

using namespace std;

int main(void)
{
	vector<string> vec = {"123sdfsdf", "SSSSSqeqwewrSSwerwr", "00234234=12aqD1sF"};

	for (string s: vec)
	{
		cout << s << endl;
		transform(s.begin(), s.end(), s.begin(), [](char c) { return toupper(c);});
		cout << s << endl;
	}
	
}