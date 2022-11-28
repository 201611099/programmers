// https://school.programmers.co.kr/learn/courses/30/lessons/12943

#include <iostream>

using namespace std;

int solution(int num) {
	int count = 0;
	long long _num = 1LL * num;

	while (_num != 1)
	{
		if (_num % 2) // if ((_num % 10) % 2)
			_num = _num * 3 + 1;
		else
			_num /= 2;
		count++;
		if (count == 500)
			return -1;
	}
	return count;
}

int main(void)
{
	cout << solution(6) << endl; // 8
	cout << solution(16) << endl; // 4
	cout << solution(626331) << endl; // -1
}
