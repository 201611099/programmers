// https://school.programmers.co.kr/learn/courses/30/lessons/12921
// 소수 찾기

#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

// 효율성 테스트 시간 초과 => set보다 vector에 unique erase가 더 빠르다
int solution(int n)
{
	vector<int> primes;
	set<int> multi;

	for (int i = 2; i < sqrt(n); i++)
	{
		if (sqrt(i) == static_cast<int>(sqrt(i)))
			continue ;
		int j;
		for (j = static_cast<int>(sqrt(i)); j > 1; j--)
		{
			if (i % j == 0)
				break ;
		}
		if (j == 1)
			primes.push_back(i);
	}

	for (int i: primes)
		for (int j = i; i * j <= n; j++)
			multi.insert(i * j);
	return n - multi.size() - 1;
}

// int solution(int n) {
//     vector<int> primes;
//     vector<int> multi;
    
//     for (int i = 2; i <= static_cast<int>(sqrt(n)); i++)
//     {
//         int j = static_cast<int>(sqrt(i));
//         for (; j > 1; j--)
//             if (i % j == 0)
//                 break ;
//         if (j == 1)
//             primes.push_back(i);
//     }
//     for (int i: primes)
//     {
//         for (int j = i; i * j <= n; j++)
//         {
//             multi.push_back(i * j);
//         }
//     }
//     sort(multi.begin(), multi.end());
//     multi.erase(unique(multi.begin(), multi.end()), multi.end());
//     return n - multi.size() - 1;
// }

int main(void)
{
	cout << solution(10) << endl; // 4
	cout << solution(5) << endl; // 3
}
