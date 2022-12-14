// https://school.programmers.co.kr/learn/courses/30/lessons/134240
// 푸드 파이트 대회

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// reverse_iterator, sort보다 reverse가 더 빠르다?

string solution(vector<int> food)
{
	string one_way = "";
	string result;

	for (int i = 1; i < food.size(); i++)
		for (int j = 0; j < food[i] / 2; j++)
			one_way += i + '0';
	result = one_way + '0';
	reverse(one_way.begin(), one_way.end());
	return result + one_way;
}

// string solution(vector<int> food) {
//     string answer = "";
//     string reverse_answer;
    
//     for (int i = 1; i < food.size(); i++)
//         for (int j = 0; j < food[i] / 2; j++)
//             answer += static_cast<char>(i + '0');
//     reverse_answer = answer;
//     sort(reverse_answer.rbegin(), reverse_answer.rend());
//     return answer + "0" + reverse_answer;
// }

int main(void)
{
	cout << solution({1, 3, 4, 6}) << endl; // 1223330333221
	cout << solution({1, 7, 1, 2}) << endl; // 111303111
}
