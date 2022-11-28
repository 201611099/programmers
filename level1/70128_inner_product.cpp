// https://school.programmers.co.kr/learn/courses/30/lessons/70128
// 내적

#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int solution(vector<int> a, vector<int> b)
{
	return (inner_product(a.begin(), a.end(), b.begin(), 0));
	// return (inner_product(a.begin(), a.end(), b.begin(), 0, plus<int>(), multiplies<int>()));
}

// int solution(vector<int> a, vector<int> b) {
// 	int answer = 0;

// 	for (int i = 0; i < a.size(); i++)
// 		answer += a[i] * b[i];
// 	return answer;
// }

int main(void)
{
	cout << solution({1, 2, 3, 4}, {-3, -1, 0, 2}) << endl; // 3
	cout << solution({-1, 0, 1}, {1, 0, -1}) << endl; // -2
}
