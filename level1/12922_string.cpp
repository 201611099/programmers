// https://school.programmers.co.kr/learn/courses/30/lessons/12922
// 수박수박수박수박수박수

#include <string>
#include <iostream>

using namespace std;

string solution(int n) {
	string answer = "";
	for (int i = 0; i < n / 2; i ++)
		answer += "수박";
	return n % 2 ? answer + "수" : answer;
}

// string solution(int n) {
// 	string answer = "";

// 	for (int i = 0; i < n / 2; i++)
// 		answer += "수박";
// 	if (n % 2)
// 		answer += "수";
// 	return answer;
// }

int main(void)
{
	cout << solution(3) << endl; // 수박수
	cout << solution(4) << endl; // 수박수박
}
