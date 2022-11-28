// https://school.programmers.co.kr/learn/courses/30/lessons/12903

#include <string>
#include <iostream>

using namespace std;

string solution(string s)
{
	int strlen = s.length();
	return (strlen % 2) ? s.substr(strlen / 2, 1) : s.substr(strlen / 2 - 1, 2);
}

// string solution(string s) {
// 	int mid = s.size() / 2;
// 	return s.size() % 2 ? s.substr(mid, 1): s.substr(mid - 1, 2);
// }

int main(void)
{
	cout << solution("abcde") << endl; // c
	cout << solution("qwer") << endl; // we
}