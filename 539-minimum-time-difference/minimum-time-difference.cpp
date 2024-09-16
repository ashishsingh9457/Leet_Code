class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(int i=0;i<timePoints.size();i++)
        {
            int x=stoi(timePoints[i].substr(0,2))*60;
            int y=stoi(timePoints[i].substr(3,2));
            minutes.push_back(x+y);
        }

        sort(minutes.begin(),minutes.end());
        
        int mini=INT_MAX;
        for(int i=0;i<minutes.size()-1;i++)
        {
            mini=min(mini,minutes[i+1]-minutes[i]);
        }

        int diff=(minutes[0]+1440)-minutes[minutes.size()-1];
        return min(mini,diff);
    }
};