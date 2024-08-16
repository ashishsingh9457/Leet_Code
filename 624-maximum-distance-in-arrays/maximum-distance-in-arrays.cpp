class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) 
    {
        int mini = INT_MAX;
        int index=0;
        for(int i=0;i<arrays.size();i++)
        {
            if(arrays[i][0]<mini)
            {
                mini = arrays[i][0];
                index = i;
            }
        }
        int maxi=INT_MIN;
        for(int i=0;i<arrays.size();i++)
        {
            if(i!=index && arrays[i][arrays[i].size()-1]>maxi)
            {
                maxi = arrays[i][arrays[i].size()-1];
            }
        }

        int ans1 = maxi-mini;
        
        int maxi1 = INT_MIN;
        int index1=0;
        for(int i=0;i<arrays.size();i++)
        {
            if(arrays[i][arrays[i].size()-1]>maxi1)
            {
                maxi1 = arrays[i][arrays[i].size()-1];
                index1 = i;
            }
        }
        int mini1=INT_MAX;
        for(int i=0;i<arrays.size();i++)
        {
            if(i!=index1 && arrays[i][0]<mini1)
            {
                mini1 = arrays[i][0];
            }
        }

        int ans2=maxi1-mini1;

        return max(ans1,ans2);
    }
};