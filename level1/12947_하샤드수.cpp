// https://school.programmers.co.kr/learn/courses/30/lessons/12947

#include <string>
#include <vector>
#include <numeric>
#include <iostream>

using namespace std;

int sumAll(int x)
{
	string str = to_string(x);
	vector<char> v(str.begin(), str.end());
	int sum = 0;
	for(char c: v)
		sum += c - '0';
	return sum;	
}

bool solution(int x) {
	bool answer = true;
	return !(x % sumAll(x));
}

// int custom_plus(int a, int b)
// {
// 	return (a + b - '0');
// }

// bool solution(int n)
// {
// 	string str = to_string(n);
// 	vector<int> vec(str.begin(), str.end());
// 	int sum = accumulate(vec.begin(), vec.end(), 0, custom_plus);
// 	return !(n % sum);
// }

int main(void)
{
	cout << boolalpha << solution(102) << endl; // true
	cout << boolalpha << solution(12) << endl; // true
	cout << boolalpha << solution(11) << endl; // false
	cout << boolalpha << solution(13) << endl; // false
}
