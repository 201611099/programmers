// https://school.programmers.co.kr/learn/courses/30/lessons/12915
// 문자열 내 마음대로 정렬하기

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream &os, const vector<T> &vec)
{
	for (T t: vec)
		os << t << " ";
	return os;
}

int g_num;

vector<string> solution(vector<string> strings, int n)
{
	g_num = n;
	sort(strings.begin(), strings.end(), [](string a, string b) {
		if (a[g_num] == b[g_num])
			return a < b;
		return a[g_num] < b[g_num];
	});
	return strings;
}

// int get_n(int n)
// {
// 	static bool b = false;
// 	static int num;

// 	if (!b)
// 	{
// 		num = n;
// 		b = true;
// 	}
// 	return num;
// }

// bool cus_compare(string a, string b)
// {
//     int idx = get_n(1);
//     if (a[idx] == b[idx])
//         return (a < b);
//     return (a[idx] < b[idx]);
// }

// vector<string> solution(vector<string> strings, int n) {
//     get_n(n);
//     sort(strings.begin(), strings.end(), cus_compare);
//     return strings;
// }

int main(void)
{
	cout << solution({"sun", "bed", "car"}, 1) << endl; // car bed sun
	cout << solution({"abce", "abcd", "cdx"}, 2) << endl; // abcd abce cdx
}