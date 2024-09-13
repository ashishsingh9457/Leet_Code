class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) 
    {
        //Brute Force
        vector<int> ans;
        for(int i=0;i<queries.size();i++)
        {
                int temp=0;
                for(int k=queries[i][0];k<=queries[i][1];k++)
                {
                    temp=temp^arr[k];
                }
                ans.push_back(temp);
        }
        return ans;
    }
};