// https://school.programmers.co.kr/learn/courses/30/lessons/12919
// 서울에서 김서방 찾기

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> seoul)
{
	sort(seoul.begin(), seoul.end());
	vector<string>::iterator it = find(seoul.begin(), seoul.end(), "Kim");
	return "김서방은 " + to_string(it - seoul.begin()) + "에 있다";
}

// string solution(vector<string> seoul) {
// 	vector<string>::iterator it;

// 	it = find(seoul.begin(), seoul.end(), "Kim");
// 	string answer = "김서방은 " + to_string(it - seoul.begin()) + "에 있다";
// 	return answer;
// }

int main(void)
{
	cout << solution({"Jane", "Kim"}) << endl;
}
