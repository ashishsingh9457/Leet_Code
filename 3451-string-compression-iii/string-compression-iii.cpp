class Solution {
public:
    string compressedString(string word) 
    {
        string ans="";
        int i=0;
        while(i<word.size())
        {
            char x = word[i];
            int j=i;
            while(j<word.size() && x==word[j])
            {
                j++;
            }
            int count = j-i;
            if(count>9)
            {
                while(count>=9)
                {
                    ans+='9';
                    ans+=x;
                    count-=9;
                }
                if(count!=0){
                ans+=char(count%9+'0');
                ans+=x;}
            }
            else
            {
                ans+=char(count%10+'0');
                ans+=x;
            }
            i=j;
        }
        return ans;
        
    }
};