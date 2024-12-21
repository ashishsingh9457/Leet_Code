class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> ans;
        int n= intervals.size();
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int x=intervals[i][1];
            while(j<n && x>=intervals[j][0])
            {
                x = max(x,intervals[j][1]);
                j++;
            }
            ans.push_back({intervals[i][0],x});
            i=j-1;
        }
        return ans;
    }
};