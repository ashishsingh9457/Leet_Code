class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> que;

        for(int i=0;i<nums.size();i++)
        {
            que.push({nums[i],i});
        }

        for(int i=0;i<k;i++)
        {
            pair<int, int> x = que.top();
            que.pop();
            x.first*=multiplier;
            que.push(x);
        }
        vector<int> ans(nums.size(),0);
        while(!que.empty())
        {
            ans[que.top().second]=que.top().first;
            que.pop();
        }
        return ans;
    }
};