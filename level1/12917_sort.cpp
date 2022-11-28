// https://school.programmers.co.kr/learn/courses/30/lessons/12917
// 문자열 내림차순으로 배치하기

#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s) {
	sort(s.rbegin(), s.rend());
	// sort(s.begin(), s.end(), greater<>()); // c++17
	// sort(s.begin(), s.end(), greater<char>()); // c++11
	return s;
}

int main(void)
{
	cout << solution("Zbcdefg") << endl; // gfedcbZ
}
