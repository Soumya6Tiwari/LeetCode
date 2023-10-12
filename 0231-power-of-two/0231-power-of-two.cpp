class Solution {
public:
    bool isPowerOfTwo(int n)
    {
        long i=0,j,k=0;
        j=0;
        bool ans;
        while(j<=n)
        {
            j=pow(2,i);
            if(j==n)
            {
               return true;
            }
            
            
            i++;
            
        }
        return false;
        
    }
};