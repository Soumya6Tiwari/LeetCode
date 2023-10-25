class Solution {
public:
    bool isThree(int n)
    {
        int i,j,k,count=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==3)
        {
            return true;
        }
        return false;
        
    }
};