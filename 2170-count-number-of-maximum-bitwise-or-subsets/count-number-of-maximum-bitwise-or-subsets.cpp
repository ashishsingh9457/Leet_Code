class Solution {
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        int subset_count = 1 << n; // Total number of subsets (2^n)
        
        for (int i = 0; i < subset_count; ++i) {
            vector<int> subset;
            for (int j = 0; j < n; ++j) {
                // Check if j-th element is in the i-th subset
                if (i & (1 << j)) {
                    subset.push_back(nums[j]);
                }
            }
            result.push_back(subset);
        }
        
        return result;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        // Calculate the maximum possible OR
        int maxOr = 0;
        for (int num : nums) {
            maxOr |= num;  // Bitwise OR of all elements
        }
        
        // Now count subsets that have this OR value
        int count = 0;
        int n = nums.size();
        int subset_count = 1 << n; // Total number of subsets (2^n)
        
        for (int i = 0; i < subset_count; ++i) {
            int currentOr = 0;
            for (int j = 0; j < n; ++j) {
                if (i & (1 << j)) {
                    currentOr |= nums[j];  // Bitwise OR for the current subset
                }
            }
            if (currentOr == maxOr) {
                count++;
            }
        }
        
        return count;
    }
};