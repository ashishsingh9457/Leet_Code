class Solution {
public:

    long long fun(long long x)
    {
        long long value = 0;

        while(x>0)
        {
            value+=pow(x%10,2);
            x=x/10;
        }

        return value;
    }

    bool isHappy(int n) 
    {
        long long x=n;

        for(int i=0;i<1000;i++)
        {
            x = fun(x);

            if(x==1)
            {
                return true;
            }
        }
        return false;
    }
};