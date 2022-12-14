// https://school.programmers.co.kr/learn/courses/30/lessons/12910
// 나누어 떨어지는 숫자 배열

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T> vec)
{
	for (T t: vec)
		os << t << " ";
	return os;
}

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;

	sort(arr.begin(), arr.end());
	for (int i: arr)
		if (i % divisor == 0)
			answer.push_back(i);
	return answer.empty() ? vector<int>(1, -1) : answer;
}

// vector<int> solution(vector<int> arr, int divisor) {
// 	vector<int> answer;

// 	for (int i: arr)
// 		if (i % divisor == 0)
// 			answer.push_back(i);
// 	if (answer.size() < 1)
// 		answer.push_back(-1);
// 	sort(answer.begin(), answer.end());
// 	return answer;
// }

int main(void)
{
	cout << solution({5, 9, 7, 10}, 5) << endl; // 5 10
	cout << solution({2, 36, 1, 3}, 1) << endl; // 1 2 3 36
	cout << solution({3, 2, 6}, 10) << endl; // 2 3 6
}
