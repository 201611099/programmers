// https://school.programmers.co.kr/learn/courses/30/lessons/17681
// [1차] 비밀지도

#include <string>
#include <vector>
#include <iostream>

using namespace std;

template <typename T>
ostream& operator<<(ostream& os, const vector<T> &vec)
{
	for (T t: vec)
		cout << t << endl;
	return os;
}

string convert_string(int n, int src)
{
	string ret(n, ' ');
	int idx = n - 1;

	while (src > 1)
	{
		if (src % 2)
			ret[idx] = '#';
		src /= 2;
		idx--;
	}
	if (src == 1)
		ret[idx] = '#';
	return ret;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
	vector<string> ret;
	for (int i = 0; i < n; i++)
	{
		arr1[i] |= arr2[i];
		ret.push_back(convert_string(n, arr1[i]));
	}
	return ret;
}

// vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
// 	vector<string> ret;
//     int idx = n - 1;
    
// 	for (int i = 0; i < n; i++)
// 	{
//         idx = n - 1;
//         string temp(n, ' ');
// 		arr1[i] |= arr2[i];
//         while (arr1[i] > 1)
//         {
//             if (arr1[i] % 2)
//                 temp[idx] = '#';
//             arr1[i] /= 2;
//             idx--;
//         }
//         if (arr1[i] == 1)
//                 temp[idx] = '#';
// 		ret.push_back(temp);;
// 	}
// 	return ret;
// }

// vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
//     vector<string> answer;
//     string temp = "";
//     for (int i = 0; i < arr1.size(); i++)
//     {
//         temp = "";
//         arr1[i] |= arr2[i];
//         while (arr1[i] > 1)
//         {
//             if (arr1[i] % 2 == 0)
//                 temp += " ";
//             else
//                 temp += "#";
//         arr1[i] /= 2;
//         }
//         temp += "#";
//         for (int i = temp.length(); i < n; i++)
//             temp += " ";
//         reverse(temp.begin(), temp.end());
//         answer.push_back(temp);
//     }
//     return answer;
// }

int main(void)
{
	cout << solution(5, {9, 20, 28, 18, 11}, {30, 1, 21, 17, 28}) << endl; 
	/*
	#####
	# # #
	### #
	#  ##
	#####
	*/
	cout << solution(6, {46, 33, 33, 22, 31, 50}, {27, 56, 19, 14, 14, 10}) << endl;
	/*
	######
	###  #
	##  ##
	 #### 
	 #####
	### # 
	*/
}