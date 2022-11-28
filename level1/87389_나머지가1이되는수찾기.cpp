// https://school.programmers.co.kr/learn/courses/30/lessons/87389

#include <iostream>

using namespace std;

int solution(int n)
{
	n--;
	for (int i = 2; i <= n; i++)
		if (n % i == 0)
			return i;
	return n;
}

// int solution(int n) {
// 	int answer = n - 1;
// 	for (int i = 2; i < n - 1; i++)
// 		if (answer % i == 0)
// 			return i;
// 	return answer;
// }

int main(void)
{
	cout << solution(10) << endl; // 3
	cout << solution(12) << endl; // 11
}
