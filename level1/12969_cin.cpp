// https://school.programmers.co.kr/learn/courses/30/lessons/12969
// 직사각형 별찍기

#include <iostream>

using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++)
			cout << "*";
		cout << endl;
	}
	return (0);
}