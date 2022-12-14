// https://school.programmers.co.kr/learn/courses/30/lessons/12930
// 이상한 문자 만들기

#include <string>
#include <locale>
#include <iostream>

using namespace std;

string solution(string s)
{
	int i = 0;

	for (char &c: s)
	{
		if (i % 2)
			c = tolower(c);
		else
			c = toupper(c);
		i++;
		if (isspace(c))
			i = 0;
	}
	return s;
}

// string solution(string s) {
//     int idx = 1;
    
//     for (int i = 0; s[i]; i++)
//     {
//         if (s[i] == ' ')
//             idx = 0;
//         else
//             s[i] = idx % 2 ? toupper(s[i]) : tolower(s[i]);
//         idx++;
//     }
//     return s;
// }

int main(void)
{
	cout << solution("try hello world") << endl; // TrY HeLlO WoRlD
}
