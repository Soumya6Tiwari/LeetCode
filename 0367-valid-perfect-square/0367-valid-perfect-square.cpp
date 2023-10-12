class Solution {
public:
    bool isPerfectSquare(int num)
    {
        long i,j,ans=1;
        i=1;
        while(i*i<=num)
        {
            ans=i*i;
            if(ans==num)
               {
                  return true; 
               }
            i++;
            
        }
        return false;
    }
};