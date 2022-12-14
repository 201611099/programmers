// https://school.programmers.co.kr/learn/courses/30/lessons/82612
// 부족한 금액 계산하기

#include <cmath>
#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
	long long _count = 1LL * count;
	return (_count + 1) * _count * price / 2 <= money ? 0 : (_count + 1) * _count * price / 2 - money;
}

// long long solution(int price, int money, int count)
// {
// 	long long answer = static_cast<long long>((price) * ((count + 1) * count) / 2) - money;
// 	return answer < 0 ? 0 : answer;
// }

int main(void)
{
	cout << solution(3, 20, 4) << endl; // 10
}
