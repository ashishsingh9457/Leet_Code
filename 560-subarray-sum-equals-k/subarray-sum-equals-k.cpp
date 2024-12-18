class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        unordered_map<int, int> pre_sum; 
        pre_sum[0]=1;
        int sum = 0;
        int maxlen = 0; 
        
        for (int i = 0; i < n; i++) 
        {
            sum += nums[i];
            
            if (pre_sum.find(sum-k) != pre_sum.end()) 
            {
                maxlen+=pre_sum[sum-k];
            }
            
            pre_sum[sum]++;
        }      
        return maxlen;
    }
};