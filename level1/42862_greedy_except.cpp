// https://school.programmers.co.kr/learn/courses/30/lessons/42862
// 체육복

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// 체육복이 도난당했는데 여벌의 체육복을 가진 친구들은 본인부터 가지고 있어야함
// 같은 반복문 안에서 처리해버리면 여벌의 체육복을 가진 친구들이 그 친구에게 빌려줌으로 안해 문제가 발생함
// 결국은 반복문을 2번 탈 수밖에 없음
int solution(int n, vector<int> lost, vector<int> reserve)
{
	vector<int> clothes(n + 1, 1);

	sort(reserve.begin(), reserve.end());
	for (int i: lost)
		clothes[i] = 0;
	for (int &i: reserve)
	{
		if (clothes[i] == 0)
		{
			clothes[i] = 1;
			i = 32;
		}
	}
	for (int i: reserve)
	{
		if (i - 1 <= n && clothes[i - 1] == 0)
			clothes[i - 1] = 1;
		else if (i + 1 <= n && clothes[i + 1] == 0)
			clothes[i + 1] = 1;
	}
	return count(clothes.begin() + 1, clothes.end(), 1);
}

// int solution(int n, vector<int> lost, vector<int> reserve) {
//     vector<bool> check(n + 1, true);
    
//     for (int i: lost)
//         check[i] = false;
//     sort(reserve.begin(), reserve.end());
//     for (int i = 0; i < reserve.size(); i++)
//     {
//         if (check[reserve[i]] == false)
//         {
//             check[reserve[i]] = true;
//             reserve[i] = 32;
//         }
//     }
//     for (int i: reserve)
//     {
//         if (i - 1 > 0 && check[i - 1] == false)
//             check[i - 1] = true;
//         else if (i + 1 <= n && check[i + 1] == false)
//             check[i + 1] = true;
//     }
//     return count(check.begin(), check.end(), true) - 1;
// }


int main(void)
{
	cout << solution(5, {2, 4}, {1, 3, 5}) << endl; // 5
	cout << solution(5, {2, 4}, {3}) << endl; // 4
	cout << solution(3, {3}, {1}) << endl; // 2
	return 0;
}
