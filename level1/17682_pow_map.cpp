// https://school.programmers.co.kr/learn/courses/30/lessons/17682
// [1차] 다트 게임(2018 카카오 블라인드 채용)

#include <string>
#include <map>
#include <locale>
#include <cmath>
#include <iostream>

using namespace std;

int solution(string dartResult)
{
	map<char, int> power = {{'S', 1}, {'D', 2}, {'T', 3}};
	int answer = 0;
	int before = 0;
	int now = 0;

	for (int i = 0; i < dartResult.size(); i++)
	{
		if (isdigit(dartResult[i]))
		{
			before = now;
			now = dartResult[i] - '0';
			if (i + 1 < dartResult.size() && isdigit(dartResult[i + 1]))
			{
				now = 10;
				i++;
			}
		}
		else if (isupper(dartResult[i]))
		{
			now = pow(now, power[dartResult[i]]);
			answer += now;
		}
		else if (dartResult[i] == '*')
		{
			answer += before + now;
			now = now * 2;
		}
		else
		{
			answer -= now * 2;
			now *= -1;
		}
	}
	return answer;
}

// #include <algorithm>

// int solution(string dartResult) {
//     string temp = "";
//     string score = "SDT";
//     int power = 0;
//     int before = 0;
//     int now = 0;
//     int answer = 0;
    
//     for (int i = 0; i < dartResult.size(); i++)
//     {
//         if (isdigit(dartResult[i]))
//             temp += dartResult[i];
//         else if (isalpha(dartResult[i]))
//         {
//             power = find(score.begin(), score.end(), dartResult[i]) - score.begin() + 1;
//             now = pow(stoi(temp), power);
//             temp = "";
//             if (i + 1 < dartResult.size() && dartResult[i + 1] == '*')
//             {
//                 answer += before;
//                 now *= 2;
//             }
//             else if (i + 1 < dartResult.size() && dartResult[i + 1] == '#')
//                 now *= -1;
//             answer += now;
//             before = now;
//         }
//     }
//     return answer;
// }

int main(void)
{
	cout << solution("1S2D*3T") << endl; // 37
	cout << solution("1D2S#10S") << endl; // 9
	cout << solution("1D2S0T") << endl; // 3
	cout << solution("1S*2T*3S") << endl; // 23
	cout << solution("1D#2S*3S") << endl; // 5
	cout << solution("1T2D3D#") << endl; // -4
	cout << solution("1D2S3T*") << endl; // 59
}