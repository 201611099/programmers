// https://school.programmers.co.kr/learn/courses/30/lessons/12940
// 최대공약수와 최소공배수

#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream &os, const vector<T> &vec)
{
	for (T t: vec)
		cout << t << " ";
	return os;
}

vector<int> solution(int a, int b)
{
	vector<int> answer(2, 1);
	int _max = max(a, b);
	int _min = min(a, b);

	if (_max % _min == 0)
		return {_min, _max};
	for (int i = 2; i < sqrt(_min); i++)
	{
		if (_min % i == 0)
		{
			if (_max % (_min / i) == 0)
			{
				answer[0] = _min / i;
				break ;
			}
			else if (_max % i == 0)
				answer[0] = i;
		}
	}
	answer[1] = _min * _max / answer[0];
	return (answer);
}

// vector<int> solution(int n, int m) {
//     if (n == m)
//         return {n, m};
//     int min = n < m ? n : m;
//     int max_div = (n * m / min) % min ? 1 : min;
//     int min_mul = n * m;
//     for (int i = 2; max_div != min && i < min; i++)
//         if (n % i == 0 && m % i == 0)
//             max_div = i;
//     min_mul = (max_div == 1) ? min_mul : min_mul / max_div;
//     return {max_div, min_mul};
// }

int main(void)
{
	cout << solution(3, 12) << endl; // 3 12
	cout << solution(2, 5) << endl; // 1 10
}
