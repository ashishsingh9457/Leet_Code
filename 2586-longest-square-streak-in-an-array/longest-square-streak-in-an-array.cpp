// #include<bits/stdc++.h>
class Solution {
public:

    
    int longestSquareStreak(vector<int>& nums) 
    {
        int ans=-1;
        int n=nums.size();

        sort(nums.begin(), nums.end());

        for(int i=0;i<nums.size();i++)
        {
            long long  x=(long long)nums[i];

            long long powe = x*x;

            if(binary_search(nums.begin()+i, nums.end(), powe))
            {
                int len=1;
                while(binary_search(nums.begin(), nums.end(), powe))
                {
                    len++;
                    powe = powe*powe;
                }
                ans=max(ans, len);
            }
        }
        return ans;
    }

};