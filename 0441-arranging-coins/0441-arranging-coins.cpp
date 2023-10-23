class Solution {
public:
    int arrangeCoins(int n)
    {
        long i,j,k,sum=0,count=0;
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
            if(sum<=n)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return (int)count;
        
    }
};