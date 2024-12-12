class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int steps = 0;
        int n = plants.size();
        int currCap = capacity;
        for(int i=0;i<n;i++)
        {
            if (currCap < plants[i]) 
            { 
                steps += (2 * i);      
                currCap = capacity;    
            }
            currCap -= plants[i];  
            steps++;     
        }
        return steps;
    }
};