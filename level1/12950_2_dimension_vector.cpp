// https://school.programmers.co.kr/learn/courses/30/lessons/12950
// 행렬의 덧셈

#include <vector>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream& os, vector< vector<T> > vec)
{
	for (vector<T> inner : vec)
	{
		for (T t: inner)
			os << t << " ";
		os << "\t\t";
	}
	return os;
}

vector< vector<int> > solution(vector< vector<int> > arr1, vector< vector<int> > arr2) {
	for (int i = 0; i < arr1.size(); i++)
		for (int j = 0; j < arr1[0].size(); j++)
			arr1[i][j] += arr2[i][j];
	return arr1;
}

int main(void)
{
	cout << solution({{1, 2}, {2, 3}}, {{3, 4}, {5, 6}}) << endl;// 4 6 . 7 9
	cout << solution({{1}, {2}}, {{3}, {4}}) << endl; // 4 . 6
}