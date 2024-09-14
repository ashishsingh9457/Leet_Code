class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
       // Initialize variables to track maximum value and subarray lengths
        int max_num = *max_element(nums.begin(), nums.end());
        int max_len = 0, current_len = 0;

        // Traverse through the array
        for (int num : nums) {
            if (num == max_num) {
                current_len++; // Increase current sequence length
            } else {
                max_len = max(max_len, current_len); // Check if current sequence is longest
                current_len = 0; // Reset current sequence length
            }
        }

        // Final check in case the longest sequence was at the end
        return max(max_len, current_len);
    }
};