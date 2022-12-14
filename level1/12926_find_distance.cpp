// https://school.programmers.co.kr/learn/courses/30/lessons/12926
// 시저 암호

#include <string>
#include <locale>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string s, int n)
{
	string lower = "abcdefghijklmnopqrstuvwxyz";
	string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int org_idx;

	for (char &c: s)
	{
		if (isspace(c))
			continue ;
		if (isupper(c))
		{
			org_idx = distance(upper.begin(), find(upper.begin(), upper.end(), c));
			c = upper[(org_idx + n) % 26];
		}
		else
		{
			org_idx = distance(lower.begin(), find(lower.begin(), lower.end(), c));
			c = lower[(org_idx + n) % 26];
		}
	}
	return s;
}

// string solution(string s, int n) {
//     string lower = "abcdefghijklmnopqrstuvwxyz";
//     int idx;
//     for (int i = 0; s[i]; i++)
//     {
//         if (s[i] == ' ')
//             continue ;
//         if (isupper(s[i]))
//         {
//             s[i] = tolower(s[i]);
//             idx = find(lower.begin(), lower.end(), s[i]) - lower.begin();
//             s[i] = toupper(lower[(idx + n) % lower.length()]);
//         }
//         else
//         {
//             idx = find(lower.begin(), lower.end(), s[i]) - lower.begin();
//             s[i] = lower[(idx + n) % lower.length()];
//         }
//     }
//     return s;
// }

int main(void)
{
	cout << solution("AB", 1) << endl; // BC
	cout << solution("z", 1) << endl; // a
	cout << solution("a B z", 4) << endl; // e F d
}