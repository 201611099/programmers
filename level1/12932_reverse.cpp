// https://school.programmers.co.kr/learn/courses/30/lessons/12932
// 자연수 뒤집어 배열로 만들기

#include <vector>
// #include <string>
// #include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T>& vec)
{
	for (T t: vec)
		os << t << " ";
	return os;
}

// faster
vector<int> solution(long long n)
{
	vector<int> answer;

	while (n > 9)
	{
		answer.push_back(n % 10);
		n /= 10;
	}
	answer.push_back(n);
	return answer;
}

// vector<int> solution(long long n) {
// 	string str = to_string(n);
// 	reverse(str.begin(), str.end());
// 	vector<int> answer;
// 	int i = 0;
		
// 	while (str[i])
// 		answer.push_back(str[i++] - '0');
// 	return answer;
// }

int main(void)
{
	cout << solution(12345) << endl; // [5, 4, 3, 2, 1]
}