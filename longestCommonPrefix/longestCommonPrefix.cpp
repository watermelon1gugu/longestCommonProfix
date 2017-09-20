// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include<vector>

using namespace std;
class Solution {
public:
	string longestCommonPrefix(vector<string> &strs) {
		string result = "";

		int min_size = strs[0].size();
		result = strs[0];
		for (int i = 0; i<strs.size(); i++) {
			for (int I = 0; I<min_size; I++) {
				if (result[I] != strs[i][I]) {
					min_size = I;
					break;
				}
			}
		}
		return result.substr(0, min_size);
	}
};

int main() {

	vector<string> test;
	test.push_back("aaabbbccc");
	test.push_back("aabbbbccc");
	test.push_back("aaabbbccc");
	Solution solution;
	string result = solution.longestCommonPrefix((vector<string>)test);
	cout << result << endl;
	return 0;
}
