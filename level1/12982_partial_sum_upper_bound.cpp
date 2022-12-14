// https://school.programmers.co.kr/learn/courses/30/lessons/12982
// 예산

#include <vector>
#include <algorithm>
#include <numeric>
#include <iostream>

using namespace std;

int solution(vector<int> d, int budget)
{
	vector<int> accum(d.size());
	sort(d.begin(), d.end());
	partial_sum(d.begin(), d.end(), accum.begin());
	vector<int>::iterator it = upper_bound(accum.begin(), accum.end(), budget);
	return distance(accum.begin(), it);
}

// int solution(vector<int> d, int budget) {
//     if (d.size() < budget && accumulate(d.begin(), d.end(), 0) <= budget)
//         return d.size();
//     int answer = 0;
//     int sum = 0;
    
//     sort(d.begin(), d.end());
//     for (int i: d)
//     {
//         sum += i;
//         answer++;
//         if (budget == sum)
//             return (answer);
//         else if (budget < sum)
//             return (answer - 1);
//     }
//     return answer;
// }

int main(void)
{
	cout << solution({1, 3, 2, 5, 4}, 9) << endl; // 3
	cout << solution({2, 2, 3, 3}, 10) << endl; // 4
}