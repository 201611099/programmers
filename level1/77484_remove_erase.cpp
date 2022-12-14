// https://school.programmers.co.kr/learn/courses/30/lessons/77484
// 로또의 최고 순위와 최저 순위

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream &os, const vector<T> &vec)
{
	for (T t: vec)
		cout << t << " ";
	return os;
}

vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
	vector<int> answer;
	int inter = 0;
	lottos.erase(remove(lottos.begin(), lottos.end(), 0), lottos.end());
	if (lottos.size() == 0)
		return vector<int>{1, 6};
	for (int i = 0; i < lottos.size(); i++)
		if (win_nums.end() != find(win_nums.begin(), win_nums.end(), lottos[i]))
			inter++;
	if (inter == 0 && lottos.size() == 6)
		return vector<int>{6, 6};
	answer.push_back(7 - inter - (6 - lottos.size()));
	answer.push_back(7 - inter > 6 ? 6 : 7 - inter);
	return answer;
}

// vector<int> solution(vector<int> lottos, vector<int> win_nums) {
//     vector<int> answer;
//     int correct = 0;
//     int zero_num = count(lottos.begin(), lottos.end(), 0);
    
//     if (zero_num == 6)
//         return {1, 6};
//     sort(lottos.begin(), lottos.end());
//     sort(win_nums.begin(), win_nums.end());
//     for (int i = zero_num; i < 6; i++)
//         if (win_nums.end() != find(win_nums.begin(), win_nums.end(), *(lottos.begin() + i)))
//             correct++;
//     if (correct == 0 && zero_num == 0)
//         return {6, 6};
//     answer.push_back(7 - (correct + zero_num));
//     answer.push_back(7 - correct);
//     return answer;
// }

int main(void)
{
	cout << solution({44, 1, 0, 0, 31, 25}, {31, 10, 45, 1, 6, 19}) << endl; // 3 5
	cout << solution({0, 0, 0, 0, 0, 0}, {38, 19, 20, 40, 15, 25}) << endl; // 1 6
	cout << solution({1, 2, 3, 4, 5, 6}, {11, 22, 33, 44, 7, 8}) << endl; // 6 6
	cout << solution({1, 0, 0, 4, 5, 6}, {11, 22, 33, 44, 7, 8}) << endl; // 5 6
	cout << solution({45, 4, 35, 20, 3, 9}, {20, 9, 3, 45, 4, 35}) << endl; // 1 1
}
