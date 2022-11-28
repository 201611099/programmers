// https://school.programmers.co.kr/learn/courses/30/lessons/12916
// 문자열 내 p와 y의 개수

#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

bool findP(char c)
{
	if (c == 'p' || c == 'P')
		return true;
	return false;
}

bool findY(char c)
{
	if (c == 'y' || c == 'Y')
		return true;
	return false;
}

bool solution(string s)
{
	int p = count_if(s.begin(), s.end(), findP);
	int y = count_if(s.begin(), s.end(), findY);

	return p == y;
}

// bool solution(string s)
// {
// 	int p = count(s.begin(), s.end(), 'p');
// 	int y = count(s.begin(), s.end(), 'y');

// 	p += count(s.begin(), s.end(), 'P');
// 	y += count(s.begin(), s.end(), 'Y');
// 	return p == y;
// }

// bool findP(char c)
// {
//	 if (c == 'p' || c == 'P')
//		 return true;
//	 return false;
// }

// bool findY(char c)
// {
//	 if (c == 'y' || c == 'Y')
//		 return true;
//	 return false;
// }

// bool solution(string s)
// {
//	 string::iterator itP;
//	 string::iterator itY;
//	 string::iterator _end = s.end();
//	 int pNum = 0;
//	 int yNum = 0;
		
//	 itP = find_if(s.begin(), _end, findP);
//	 itY = find_if(s.begin(), _end, findY);
		
//	 if (itP == _end && itY == _end)
//		 return true;
//	 else if (itP == _end || itY == _end)
//		 return false;
//	 while (itP != _end)
//	 {
//		 pNum++;
//		 itP = find_if(++itP, _end, findP);
//	 }
//	 while (itY != _end)
//	 {
//		 yNum++;
//		 itY = find_if(++itY, _end, findY);
//	 }
//	 return (pNum == yNum);
// }

int main(void)
{
	cout << boolalpha << solution("pPoooyY") << endl; // true;
	cout << boolalpha << solution("Pyy") << endl; // false;
}