// https://school.programmers.co.kr/learn/courses/30/lessons/86051
// 없는 숫자 더하기

#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int solution(vector<int> numbers)
{
	int answer = 45; // (a + b) * (abs(a - b) + 1) / 2
	return (answer - accumulate(numbers.begin(), numbers.end(), 0));
}

// int solution(vector<int> numbers) {
// 	int sum = 0;
// 	for (int i: numbers)
// 		sum += i;
// 	return 45 - sum;
// }

int main(void)
{
	cout << solution({1, 2, 3, 4, 6, 7, 8, 0}) << endl; // 14
	cout << solution({5, 8, 4, 0, 6, 7, 9}) << endl; // 6
}
