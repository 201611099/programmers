// https://school.programmers.co.kr/learn/courses/30/lessons/67256
// 키패드 누르기(2020 카카오 인턴십)

#include <string>
#include <vector>
#include <cmath>
#include <utility>
#include <iostream>

using namespace std;

string solution(vector<int> numbers, string hand)
{
	string answer = "";
	pair<int, int> left = {4, 1};
	pair<int, int> right = {4, 1};

	for (int i: numbers)
	{
		if (i == 0) i = 11;
		if (i % 3 == 1)
		{
			answer += "L";
			left.first = i / 3 + 1;
			left.second = 1;
		}
		else if (i % 3 == 0)
		{
			answer += "R";
			right.first = i / 3;
			right.second = 1;
		}
		else
		{
			if (abs(left.first - (i / 3 + 1)) + left.second == abs(right.first - (i / 3 + 1)) + right.second)
			{
				if (hand == "right")
				{
					answer += "R";
					right.first = i / 3 + 1;
					right.second = 0;
				}
				else
				{
					answer += "L";
					left.first = i / 3 + 1;
					left.second = 0;
				}
			}
			else if (abs(left.first - (i / 3 + 1)) + left.second < abs(right.first - (i / 3 + 1)) + right.second)
			{
				answer += "L";
				left.first = i / 3 + 1;
				left.second = 0;
			}
			else
			{
				answer += "R";
				right.first = i / 3 + 1;
				right.second = 0;
			}
		}
	}
	return answer;
}

// string solution(vector<int> numbers, string hand) {
//     string answer = "";
//     pair<int, int> l_loc = make_pair(1, 4);
//     pair<int, int> r_loc = make_pair(1, 4);
//     pair<int, int> target;
//     int l_cnt = 0;
//     int r_cnt = 0;
    
//     for (int i: numbers)
//     {
//         l_cnt = 0;
//         r_cnt = 0;
//         i = i == 0 ? 11 : i;
//         target.first = i % 3;
//         target.second = i / 3 + 1;
//         if (target.first == 1)
//         {
//             l_loc.first = 1;
//             l_loc.second = target.second;
//             answer += "L";
//         }
//         else if (target.first == 0)
//         {
//             r_loc.first = 1;
//             r_loc.second = target.second - 1;
//             answer += "R";
//         }
//         else
//         {
//             if (l_loc.first == 1)
//                 l_cnt++;
//             if (r_loc.first == 1)
//                 r_cnt++;
//             l_cnt += abs(l_loc.second - target.second);
//             r_cnt += abs(r_loc.second - target.second);
//             if (l_cnt == r_cnt)
//             {
//                 if (hand == "left")
//                 {
//                     l_loc.first = 2;
//                     l_loc.second = target.second;
//                     answer += "L";
//                 }
//                 else
//                 {
//                     r_loc.first = 2;
//                     r_loc.second = target.second;
//                     answer += "R";
//                 }
//             }
//             else if (l_cnt < r_cnt)
//             {
//                 l_loc.first = 2;
//                 l_loc.second = target.second;
//                 answer += "L";
//             }
//             else
//             {
//                 r_loc.first = 2;
//                 r_loc.second = target.second;
//                 answer += "R";
//             }
//         }
//     }
//     return answer;
// }

int main(void)
{
	cout << solution({1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5}, "right") << endl;
	cout << "LRLLLRLLRRL" << endl << endl;
	cout << solution({7, 0, 8, 2, 8, 3, 1, 5, 7, 6, 2}, "left") << endl;
	cout << "LRLLRRLLLRR" << endl << endl;
	cout << solution({1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, "right") << endl;
	cout << "LLRLLRLLRL" << endl << endl;
}