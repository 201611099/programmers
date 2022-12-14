// https://school.programmers.co.kr/learn/courses/30/lessons/42889
// 실패율(2019 카카오 블라인드 채용)

#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T> &vec)
{
	for (T t: vec)
		cout << t << " ";
	return os;
}

vector<int> solution(int N, vector<int> stages)
{
	vector<int> users(N, 0);
	vector<int> accum(N);
	vector<double> rates(N);
	vector<int> answer;
	double num_of_user = 1.0 * stages.size();

	for (int i = 0; i < N; i++)
		users[i] = count(stages.begin(), stages.end(), i + 1);
	partial_sum(users.begin(), users.end(), accum.begin());
	rates[0] = users[0] / num_of_user;
	for (int i = 1; i < N; i++)
    {
        if (users[i] == 0)
            rates[i] = 0;
        else
            rates[i] = users[i] / (num_of_user - accum[i - 1]);
    }
	for (int i = 0; i < N; i++)
	{
		vector<double>::iterator it = max_element(rates.begin(), rates.end());
		answer.push_back(distance(rates.begin(), it) + 1);
		*it = -1;
	}
	return answer;
}

/*
 * 1, 6, 7, 9, 13, 23, 24, 25 실패
 * => users[i] == 0이면 그냥 rates[i]는 계산할 거 없이 0으로 넣어주면 됨.
 */
// vector<int> solution(int N, vector<int> stages)
// {
// 	vector<int> users(N, 0);
// 	vector<int> accum(N);
// 	vector<double> rates(N);
// 	vector<int> answer;
// 	int num_of_user = stages.size();

// 	for (int i = N; i > 0; i--)
// 		users[i - 1] = count(stages.begin(), stages.end(), i);
// 	partial_sum(users.begin(), users.end(), accum.begin());
// 	rates[0] = users[0] / (1.0 * num_of_user);
// 	for (int i = 1; i < N; i ++)
// 		rates[i] = users[i] / (1.0 * (num_of_user - accum[i - 1]));
// 	for (int i = 0; i < N; i++)
// 	{
// 		vector<double>::iterator it = max_element(rates.begin(), rates.end());
// 		answer.push_back(distance(rates.begin(), it) + 1);
// 		*it = -1;
// 	}
// 	return answer;
// }

vector<int> solution(int N, vector<int> stages) {
	vector<int> answer;
	vector<float> rate(N, 0);
	vector<float>::iterator it;
	vector<float>::iterator max_it;
	int stage_len = stages.size();

	for (int i = 1; i <= N; i++)
		rate[i - 1] = 1.0 * count(stages.begin(), stages.end(), i);
		// rate[i - 1] = static_cast<float>(count(stages.begin(), stages.end(), i));
		
	it = rate.begin();
	for (int i = N; i > 1; i--)
	{
		if (rate[i - 1] == 0)
			continue;
		rate[i - 1] /= (stage_len - accumulate(it, it + i - 1, 0.0));
	}
	rate[0] /= stage_len;
	// for (int i = N; i > 0; i--)
	// {
	// 	if (rate[i - 1] == 0)
	// 		continue;
	// 	else if (i == 1)
	// 		rate[i - 1] /= stage_len;
	// 	else
	// 		rate[i - 1] /= (stage_len - accumulate(it, it + i - 1, 0.0));
	// }

	for (int i = 0; i < N; i++)
	{
		max_it = max_element(it, rate.end());
		answer.push_back(max_it - it + 1);
		*max_it = -1;
	}
	return answer;
}

int main(void)
{
	cout << solution(5, {2, 1, 2, 6, 2, 4, 3, 3}) << endl; // 3 4 2 1 5
	cout << solution(4, {4, 4, 4, 4, 4}) << endl; // 4 1 2 3
}