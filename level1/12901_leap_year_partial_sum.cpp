// https://school.programmers.co.kr/learn/courses/30/lessons/12901
// 2016년

#include <string>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

string solution(int a, int b)
{
	vector<string> day = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
	vector<int> month = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<int> accum(13, 0);

	partial_sum(month.begin(), month.end(), accum.begin());
	return day[(accum[a - 1] + b) % 7];
}

// string solution(int a, int b) {
//     string weeks[] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
//     int day = 0;
//     if (a < 9)
//         day = (a - 1) / 2 * 61 + ((a - 1) % 2) * 31 + b;
//     else
//         day = 3 * 61 + 31 + (a - 8) / 2 * 61 + ((a - 8) % 2) * 31 + b;
//     if (a > 2)
//         day--;
//     return weeks[day % 7];
// }

int main(void)
{
	cout << solution(5, 24) << endl; // TUE;
}