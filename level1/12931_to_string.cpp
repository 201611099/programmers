// https://school.programmers.co.kr/learn/courses/30/lessons/12931
// 자릿수 더하기

#include <string>
#include <iostream>

using namespace std;

int solution(int n)
{
	int answer = 0;
	string str = to_string(n);
	for (char c: str)
		answer += c - '0';
	return answer;
}

// int solution(int n)
// {
//	int answer = 0;

//	while (n > 9)
//	{
//		answer += (n % 10);
//		n /= 10;
//	}
//	answer += n;
//	return answer;
// }

int main(void)
{
	cout << solution(123) << endl; // 6
	cout << solution(987) << endl; // 24
}