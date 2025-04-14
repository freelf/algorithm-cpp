// Created by Freelf at 2024/03/06 14:56
// leetgo: 1.4.1
// https://leetcode.cn/problems/longest-substring-without-repeating-characters/

#include <bits/stdc++.h>
#include "LC_IO.h"
using namespace std;

// @lc code=begin

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    	if (s.length() <= 1) {
    		return s.length();
    	}
    	unordered_map<char, int> map;
    	int left = 0, result = 0;
	    for (int i = 0; i < s.length(); ++i) {
	    	if (map.find(s[i]) != map.end()) {
	    		left = max(left,map[s[i]] + 1);
	    	}
	    	map[s[i]] = i;
	    	result = max(result, i - left + 1);
	    }
    	return result;
    }
};

// @lc code=end

int main() {
	ios_base::sync_with_stdio(false);
	stringstream out_stream;

	string s;
	LeetCodeIO::scan(cin, s);

	Solution *obj = new Solution();
	auto res = obj->lengthOfLongestSubstring(s);
	LeetCodeIO::print(out_stream, res);
	cout << "\noutput: " << out_stream.rdbuf() << endl;

	delete obj;
	return 0;
}
