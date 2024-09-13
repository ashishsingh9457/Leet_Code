class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        //Optimized approach O(nlog(n))
        vector<int> prefix_xor;
        int temp=0;
        for(int i=0;i<arr.size();i++)
        {
            temp=temp^arr[i];
            prefix_xor.push_back(temp);
        }

        vector<int> ans;
        for(int i=0;i<queries.size();i++)
        {
            if(queries[i][0]>0)
                ans.push_back(prefix_xor[queries[i][1]]^prefix_xor[queries[i][0]-1]);
            else
                ans.push_back(prefix_xor[queries[i][1]]);
        }
        return ans;
    }
};