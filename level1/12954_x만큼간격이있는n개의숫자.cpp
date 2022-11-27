// https://school.programmers.co.kr/learn/courses/30/lessons/12954

#include <vector>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T> vec)
{
	for (T t: vec)
		os << t << " ";
	return os;
}

vector<long long> solution(int x, int n)
{
	vector<long long> answer(n, x);
	
	for (int i = 0; i < n; i++)
		answer[i] *= (i + 1);
	return answer;
}

// vector<long long> solution(int x, int n) {
// 	vector<long long> answer;
// 	for (int i = 1; i <= n; i++)
// 		answer.push_back(x * i);
// 	return answer;
// }

int main(void)
{
	cout << solution(2, 5) << endl; // 2 4 6 8 10
	cout << solution(4, 3) << endl; // 4 8 12
	cout << solution(-4, 2) << endl; // -4 -8
}