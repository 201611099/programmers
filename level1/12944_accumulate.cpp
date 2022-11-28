// https://school.programmers.co.kr/learn/courses/30/lessons/12944
// 평균 구하기

#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
	return static_cast<double>(accumulate(arr.begin(), arr.end(), 0)) / arr.size();
}

int main(void)
{
	cout << solution({1, 2, 3, 4}) << endl; // 2.5
	cout << solution({5, 5}) << endl; // 5
	return 0;
}