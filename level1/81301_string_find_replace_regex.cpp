// https://school.programmers.co.kr/learn/courses/30/lessons/81301
// 숫자 문자열과 영단어(21 카카오 채용연계형 인턴십)

#include <string>
#include <regex>
#include <iostream>

using namespace std;

// regex_replace가 훨씬 느림
int solution(string s)
{
	s = regex_replace(s, regex("zero"), "0");
	s = regex_replace(s, regex("one"), "1");
	s = regex_replace(s, regex("two"), "2");
	s = regex_replace(s, regex("three"), "3");
	s = regex_replace(s, regex("four"), "4");
	s = regex_replace(s, regex("five"), "5");
	s = regex_replace(s, regex("six"), "6");
	s = regex_replace(s, regex("seven"), "7");
	s = regex_replace(s, regex("eight"), "8");
	s = regex_replace(s, regex("nine"), "9");
	return stoi(s);
}

// int solution(string s) {
//     string nums[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
//     for (int i = 0; i < 10; i++)
//     {
//         while (s.find(nums[i]) != string::npos)
//             s.replace(s.find(nums[i]), nums[i].length(), to_string(i));
//     }
//     return stoi(s);
// }

int main(void)
{
	cout << solution("one4seveneight") << endl; // 1478
	cout << solution("23four5six7") << endl; // 234567
	cout << solution("2three45sixseven") << endl; // 234567
	cout << solution("123") << endl; // 123
}