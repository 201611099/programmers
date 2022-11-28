// https://school.programmers.co.kr/learn/courses/30/lessons/12918
// 문자열 다루기 기본

#include <string>
#include <locale>
#include <algorithm>
#include <iostream>

using namespace std;

bool cus_isdigit(char a)
{
	return isdigit(a);
}

bool solution(string s)
{
	int len = s.length();

	if (len != 4 && len != 6)
		return false;
	if (count_if(s.begin(), s.end(), cus_isdigit) != len)
		return false;
	return true;
}

// bool isnotdigit(char c)
// {
// 	if (!isdigit(c))
// 		return true;
// 	return false;
// }

// bool solution(string s) {
// 	if (s.length() != 4 && s.length() != 6)
// 		return false;
// 	if (find_if(s.begin(), s.end(), isnotdigit) != s.end())
// 		return false;
// 	return true;
// }

int main(void)
{
	cout << boolalpha << solution("1234") << endl; // true
	cout << boolalpha << solution("a234") << endl; // false
}
