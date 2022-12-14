// https://school.programmers.co.kr/learn/courses/30/lessons/1845
// 폰켓몬

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> nums)
{
	int result = nums.size() / 2;
	sort(nums.begin(), nums.end());
	nums.erase(unique(nums.begin(), nums.end()), nums.end());
	return min(result, static_cast<int>(nums.size()));
}

int main(void)
{
	cout << solution({3, 1, 2, 3}) << endl; // 2
	cout << solution({3, 3, 3, 2, 2, 4}) << endl; // 3
	cout << solution({3, 3, 3, 2, 2, 2}) << endl; // 2
}