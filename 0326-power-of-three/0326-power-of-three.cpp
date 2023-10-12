class Solution {
public:
    bool isPowerOfThree(int n)
    {
        long i=0,j=0,k;
        if(n<=0)
        {
            return false;
        }
        else
        {
            while(j<=n)
            {
                j=pow(3,i);
                if(j==n)
                {
                    return true;
                }
                i++;
            }
        }
        return false;
        
    }
};