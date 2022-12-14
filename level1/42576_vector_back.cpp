// https://school.programmers.co.kr/learn/courses/30/lessons/42576
// 완주하지 못한 선수

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion)
{
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	for (int i = 0; i < completion.size(); i++)
		if (completion[i] != participant[i])
			return participant[i];
	return participant.back(); // return *(participant.end() - 1);
}

int main(void)
{
	cout << solution({"leo", "kiki", "eden"}, {"eden", "kiki"}) << endl; // leo
	cout << solution({"marina", "josipa", "nikola", "vinko", "filipa"}, {"josipa", "filipa", "marina", "nikola"}) << endl; // vinko
	cout << solution({"mislav", "stanko", "mislav", "ana"}, {"stanko", "ana", "mislav"}) << endl; // mislav
}
