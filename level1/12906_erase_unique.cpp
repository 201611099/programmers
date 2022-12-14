// https://school.programmers.co.kr/learn/courses/30/lessons/12906
// 같은 숫자는 싫어

#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

ostream& operator<<(ostream &os, vector<int> vec)
{
	for (int i: vec)
		cout << i << ' ';
	return os;
}

vector<int> solution(vector<int> arr)
{
	arr.erase(unique(arr.begin(), arr.end()), arr.end());
	return arr;
}

// vector<int> solution(vector<int> arr) 
// {
//     vector<int> answer;
//     int before = arr[0];
//     int i = 1;
    
//     answer.push_back(arr[0]);
//     while (i < arr.size())
//     {
//         if (before != arr[i])
//         {
//             answer.push_back(arr[i]);
//             before = arr[i];
//         }
//         i++;        
//     }
//     return answer;
// }

int main(void)
{
	cout << solution({1, 1, 3, 3, 0, 1, 1}) << endl; // 1, 3, 0, 1
	cout << solution({4, 4, 4, 3, 3}) << endl; // 4, 3
}