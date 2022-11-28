// https://school.programmers.co.kr/learn/courses/30/lessons/12912

#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

// long long solution(int a, int b) {
// 	long long answer = 0;
// 	long long _max = max(a, b);
// 	long long _min = min(a, b);

// 	while (_min <= _max)
// 		 answer += _min++;
// 	return answer;
// }

long long solution(int a, int b)
{
	return (1LL * (a + b) * (abs(a - b) + 1) / 2);
}

// long long solution(int a, int b) {
// 	long long answer = 0;
// 	long long min = a > b ? b : a;
// 	long long max = a > b ? a : b;

// 	while (min <= max)
// 		answer += min++;
// 	return answer;
// }

int main(void)
{
	cout << solution(3, 5) << endl; // 12
	cout << solution(3, 3) << endl; // 3
	cout << solution(5, 3) << endl; // 12
	cout << solution(-5, 3) << endl; // -9
}