// https://school.programmers.co.kr/learn/courses/30/lessons/68935
// 3진법 뒤집기

#include <vector>
#include <iostream>

using namespace std;

int solution(int n)
{
	vector<int> trans;
	int answer = 0;

	while (n > 2)
	{
		trans.push_back(n % 3);
		n /= 3;
	}
	trans.push_back(n);
	for (int i: trans)
		answer = answer * 3 + i;
	return answer;
}

// int solution(int n) {
//     vector<int> temp;
//     int i = n;
//     for (; i > 2; i /= 3)
//         temp.push_back(i % 3);
//     temp.push_back(i);
//     int answer = 0;
//     for (int i: temp)
//         answer = answer * 3 + i;
//     return answer;
// }

int main(void)
{
	cout << solution(45) << endl; // 7
	cout << solution(125) << endl; // 229
}