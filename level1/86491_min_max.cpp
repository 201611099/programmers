// https://school.programmers.co.kr/learn/courses/30/lessons/86491
// 최소직사각형

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> sizes)
{
	int wid = 0;
	int hei = 0;

	for (vector<int> vec: sizes)
	{
		wid = max(wid, max(vec[0], vec[1]));
		hei = max(hei, min(vec[0], vec[1]));
	}
	return wid * hei;
}

// int solution(vector<vector<int>> sizes) {
//     int wid = 1;
//     int hei = 1;
    
//     for (vector<int> v: sizes)
//     {
//         wid = max(wid, max(v[0], v[1]));
//         hei = max(hei, min(v[0], v[1]));
//     }
//     return wid * hei;
// }

int main(void)
{
	cout << solution({{60, 50}, {30, 70}, {60, 30}, {80, 40}}) << endl; // 4000
	cout << solution({{10, 7}, {12, 3}, {8, 15}, {14, 7}, {5, 15}}) << endl; // 120
	cout << solution({{14, 4}, {19, 6}, {6, 16}, {18, 7}, {7, 11}}) << endl; // 133
	return 0;
}