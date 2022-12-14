// https://school.programmers.co.kr/learn/courses/30/lessons/140108
// 문자열 나누기

#include <string>
#include <iostream>

using namespace std;

int solution(string s)
{
	int answer = 0;
	char x = s[0];
	int x_cnt = 0;
	int cnt = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (x_cnt == 0)
			x = s[i];
		if (s[i] == x)
			x_cnt++;
		else
		{
			cnt++;
			if (x_cnt == cnt)
			{
				x_cnt = 0;
				cnt = 0;
				answer++;
			}
		}
	}
	if (x_cnt != 0 || cnt != 0)
		answer++;
	return answer;
}

int main(void)
{
	cout << solution("banana") << endl; // 3
	cout << solution("abracadabra") << endl; // 6
	cout << solution("aaabbaccccabba") << endl; // 3
}