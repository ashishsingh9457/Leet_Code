class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
         int n=start^goal;
        bitset<32> p=n;
        return p.count();
        
    }
};