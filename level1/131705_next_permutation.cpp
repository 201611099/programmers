// https://school.programmers.co.kr/learn/courses/30/lessons/131705
// 삼총사

#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;

int solution(vector<int> number)
{
	int result = 0;
	vector<int> flag(number.size(), 0);

	sort(number.begin(), number.end());
	fill_n(flag.end() - 3, 3, 1);
	do
	{
		if (inner_product(number.begin(), number.end(), flag.begin(), 0) == 0)
			result++;
	} while (next_permutation(flag.begin(), flag.end()));
	return result;
}

// int solution(vector<int> number) {
//     if (number.size() == 3)
//     {
//         if (0 == accumulate(number.begin(), number.end(), 0))
//             return 1;
//         return 0;
//     }
//     int answer = 0;
//     for (int i = 0; i < number.size(); i++)
//     {
//         for (int j = i + 1; j < number.size(); j++)
//         {
//             for (int z = j + 1; z < number.size(); z++)
//             {
//                 if (number[i] + number[j] + number[z] == 0)
//                     answer++;
//             }
//         }
//     }
//     return answer;
// }

int main(void)
{
	cout << solution({-2, 3, 0, 2, -5}) << endl; // 2
	cout << solution({-3, -2, -1, 0, 1, 2, 3}) << endl; // 5
	cout << solution({-1, 1, -1, 1}) << endl; // 0
}
