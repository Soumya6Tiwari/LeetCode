class Solution {
public:
    bool isPowerOfFour(int n)
    {
        long i,j,k;
        i=0;
        j=0;
        if(n<=0)
        {
            return false;
            
        }
        else
        {
            while(j<=n)
            {
                j=pow(4,i);
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