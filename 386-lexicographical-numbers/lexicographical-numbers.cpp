class Solution {
public:

    static bool comp(int a, int b)
    {
        string x=to_string(a);
        string y=to_string(b);
        
        return x<y;
    }

    vector<int> lexicalOrder(int n) 
    {
        vector<int> ans;

        for(int i=0;i<n;i++)
            ans.push_back(i+1);

        sort(ans.begin(),ans.end(), comp);

        return ans;
    }
};