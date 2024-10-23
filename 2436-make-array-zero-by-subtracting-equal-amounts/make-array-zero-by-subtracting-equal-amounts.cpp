class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        priority_queue<int, vector<int>, greater<int>> pq(nums.begin(),nums.end());

        int ans=0;

        while(!pq.empty())
        {
            while(pq.top()==0&&!pq.empty())
            {
                pq.pop();
            }
            int x=pq.top();
            priority_queue<int, vector<int>, greater<int>> temp;
            while(!pq.empty())
            {
                temp.push(pq.top()-x);
                pq.pop();
            }
            pq=temp;
            ans++;
        }
        return ans-1;
        
    }
};