// https://school.programmers.co.kr/learn/courses/30/lessons/12925

#include <string>
#include <cctype> // #include <locale>
#include <iostream>

using namespace std;

int solution(string s)
{
	return stoi(s);
}

// int solution(string s)
// {
// 	int answer = 1;
// 	if (!isdigit(s[0]))
// 	{
// 		if (s[0] == '-')
// 			answer *= -1;
// 		s = s.substr(1, s.length() - 1);
// 	}
// 	return (answer * stoi(s));
// }

// #include <string>
// #include <vector>

// using namespace std;

// int solution(string s) {
//     int answer = 0;
//     int flag = 1;
//     int i = 0;
//     if (s[0] == '-')
//     {
//         flag = -1;
//         i++;
//     }
//     if (s[0] == '+')
//         i++;
//     for (; s[i]; i++)
//        answer = answer * 10 + (s[i] - '0');
//     return answer * flag;
// }

int main(void)
{
	cout << solution("1234") << endl; // 1234
	cout << solution("-1234") << endl; // -1234
	cout << solution("+1234") << endl; // 1234
}
