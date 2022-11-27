// https://school.programmers.co.kr/learn/courses/30/lessons/12937

#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int num) {
	return (num % 2) ? "Odd" : "Even";
}

int main(void)
{
	cout << solution(3) << endl; // "Odd"
	cout << solution(4) << endl; // "Even"
}
