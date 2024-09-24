#include<bits/stdc++.h>
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) 
    {
       if (arr1.empty() || arr2.empty()) return 0;

        // Hash sets to store prefixes
        unordered_set<string> prefixes1;
        unordered_set<string> prefixes2;

        // Store prefixes of arr1
        for (int num : arr1) {
            string str = to_string(num);
            for (int len = 1; len <= str.size(); ++len) {
                prefixes1.insert(str.substr(0, len));
            }
        }

        // Store prefixes of arr2
        for (int num : arr2) {
            string str = to_string(num);
            for (int len = 1; len <= str.size(); ++len) {
                prefixes2.insert(str.substr(0, len));
            }
        }

        // Find the longest common prefix
        int maxLength = 0;
        for (const string& prefix : prefixes1) {
            if (prefixes2.count(prefix)) {
                maxLength = max(maxLength, (int)prefix.size());
            }
        }

        return maxLength;
    }
};