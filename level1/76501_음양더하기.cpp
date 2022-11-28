// https://school.programmers.co.kr/learn/courses/30/lessons/76501

#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
	for (int i = 0; i < signs.size(); i++)
		absolutes[i] *= signs[i] ? 1 : -1;
	return accumulate(absolutes.begin(), absolutes.end(), 0);
}

// int solution(vector<int> absolutes, vector<bool> signs) {
// 	int answer = 0;
// 	for (int i = 0; i < signs.size(); i++)
// 		answer += signs[i] ? absolutes[i] : -absolutes[i];
// 	return answer;
// }

int main(void)
{
	cout << solution({4, 7, 12}, {true, false, true}) << endl; // 9
	cout << solution({1, 2, 3}, {false, false, true}) << endl; // 0
}
