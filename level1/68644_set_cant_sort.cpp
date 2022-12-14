// https://school.programmers.co.kr/learn/courses/30/lessons/68644
// 두 개 뽑아서 더하기

#include <vector>
#include <set>
#include <numeric>
#include <algorithm>
#include <iostream>

using namespace std;

ostream& operator<<(ostream &os, vector<int> vec)
{
	for (int i : vec)
		os << i << " ";
	return os;
}

// 훨씬 더 느림
// set은 sort 적용 불가!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
vector<int> solution(vector<int> numbers)
{
	set<int> num;
	vector<int> flag(numbers.size(), 0);

	sort(numbers.rbegin(), numbers.rend());
	fill_n(flag.end() - 2, 2, 1);
	do
	{
		num.insert(inner_product(numbers.begin(), numbers.end(), flag.begin(), 0));
	} while (next_permutation(flag.begin(), flag.end()));
	return vector<int>(num.begin(), num.end());
}

// vector<int> solution(vector<int> numbers) {
//     vector<int> answer;
    
//     for (int i = 0; i < numbers.size(); i++)
//         for (int j = i + 1; j < numbers.size(); j++)
//             answer.push_back(numbers[i] + numbers[j]);
//     sort(answer.begin(), answer.end());
//     answer.erase(unique(answer.begin(), answer.end()), answer.end());
//     return answer;
// }

int main(void)
{
	cout << solution({2, 1, 3, 4, 1}) << endl; // 2 3 4 5 6 7
	cout << solution({5, 0, 2, 7}) << endl; // 2 5 7 9 12
}
