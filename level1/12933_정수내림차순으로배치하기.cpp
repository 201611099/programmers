// https://school.programmers.co.kr/learn/courses/30/lessons/12933

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n)
{
	string str = to_string(n);
	sort(str.rbegin(), str.rend());
	return stoll(str);
}

// long long solution(long long n) {
// 	long long answer = 0;
// 	int i = 1;
// 	string str = to_string(n);
// 	vector<char> v(str.begin(), str.end());
		
// 	sort(v.begin(), v.end());
// 	for (char c: v)
// 	{
// 		answer += (c - '0') * i;
// 		i *= 10;
// 	}
// 	return answer;
// }

int main(void)
{
	cout << solution(118372) << endl; // 873211
	return 0;
}
