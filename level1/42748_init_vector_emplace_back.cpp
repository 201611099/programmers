// https://school.programmers.co.kr/learn/courses/30/lessons/42748
// K번째 수

#include <vector>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream &os, const vector<T> vec)
{
	for (T t: vec)
		cout << t << " ";
	return os;
}

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
	vector<int> ret;

	for (vector<int> vec: commands)
	{
		vector<int> temp(array.begin() + vec[0] - 1, array.begin() + vec[1]);
		sort(temp.begin(), temp.end());
		ret.emplace_back(temp[vec[2] - 1]);
	}
	return ret;
}

int main(void)
{
	cout << solution({1, 5, 2, 6, 3, 7, 4}, { {2, 5, 3}, {4, 4, 1}, {1, 7, 3} }) << endl; // 5 6 3
}
