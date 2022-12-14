// https://school.programmers.co.kr/learn/courses/30/lessons/132267
// 콜라 문제

#include <iostream>

using namespace std;

int solution(int a, int b, int n)
{
	int answer = 0;

	while (n >= a)
	{
		answer += (n / a) * b;
		n = (n % a) + (n / a) * b;
	}
	return answer;
}

// int solution(int a, int b, int n) {
//     int answer = 0;
//     int remain = n;
//     int get = 0;
    
//     if (a > n)
//         return 0;
//     while (remain >= a)
//     {
//         get = (remain / a) * b;
//         answer += get;
//         remain = (remain % a) + get;
//     }
//     return answer;
// }

int main(void)
{
	cout << solution(2, 1, 20) << endl; // 19
	cout << solution(3, 1, 20) << endl; // 9
}