// https://school.programmers.co.kr/learn/courses/30/lessons/77884
// 약수의 개수와 덧셈

#include <cmath>
#include <iostream>

using namespace std;

int solution(int left, int right) {
	int answer = 0;

	while (left <= right)
	{
		if (sqrt(left) == static_cast<int>(sqrt(left)))
			answer -= left;
		else
			answer += left;
		left++;
	}
	return answer;	
}

bool even_div(int num)
{
	if (sqrt(num) - static_cast<int>(sqrt(num)) == 0.0)
		return false;
	return true;
}

int solution(int left, int right) {
	int answer = 0;
		
	while (left <= right)
	{
		answer = even_div(left) ? answer + left : answer - left;
		left++;
	}
	return answer;
}

int main(void)
{
	cout << solution(13, 17) << endl; // 43
	cout << solution(24, 27) << endl; // 52
}
