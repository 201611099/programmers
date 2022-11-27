// https://school.programmers.co.kr/learn/courses/30/lessons/12934

#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n)
{
	long long _sqrt = static_cast<long long>(sqrt(n));
	if (pow(_sqrt, 2) == n)
		return pow(_sqrt + 1, 2);
	return -1;
}

// long long solution(long long n) {
//     long long _sqrt = static_cast<long long>(sqrt(n));
//     for (; i <= _sqrt; i++)
//         if (_sqrt * _sqrt == n)
//             return (_sqrt + 1) * (_sqrt + 1);
//     return -1;
// }

int main(void)
{
	cout << solution(121) << endl;
	cout << solution(3) << endl;
}