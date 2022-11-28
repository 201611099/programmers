// https://school.programmers.co.kr/learn/courses/30/lessons/12948
// 핸드폰 번호 가리기

#include <string>
#include <iostream>

using namespace std;

string solution(string phone_number) {
	string ret = "";

	for (int i = 0; i < phone_number.size() - 4; i++)
		ret += "*";
	ret += phone_number.substr(phone_number.size() - 4, 4);
	return (ret);
}

// string solution(string phone_number) {
// 	if (phone_number.length() <= 4)
// 		return phone_number;
// 	string answer = "";
// 	int i = 0;
// 	for (; i < phone_number.length() - 4; i++)
// 		answer += "*";
// 	while (phone_number[i])
// 		answer += phone_number[i++];
// 	return answer;
// }

int main(void)
{
	cout << solution("1234") << endl; // 1234
	cout << solution("01033334444") << endl; // *******4444
	cout << solution("027778888") << endl; // *****8888
	return 0;
}
