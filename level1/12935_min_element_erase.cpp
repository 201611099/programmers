// https://school.programmers.co.kr/learn/courses/30/lessons/12935
// 제일 작은 수 제거하기

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream &os, const vector<T> &vec)
{
	for (T t: vec)
		os << t << " ";
	return os;
}

vector<int> solution(vector<int> arr) {
	if (arr.size() == 1)
		arr[0] = -1;
	else
	{
		vector<int>::iterator it = min_element(arr.begin(), arr.end());
		arr.erase(it);
	}
	return (arr);
}

// vector<int> solution(vector<int> arr) {
// 	if (arr.size() < 2)
// 		return vector<int>(1, -1);
// 	vector<int> answer = arr;
//
// 	answer.erase(min_element(answer.begin(), answer.end()));
// 	return answer;
// }

int main(void)
{
	cout << solution({4, 3, 2, 1}) << endl; // 4 3 2
	cout << solution({10}) << endl; // -1
}
