class Solution {
public:
    int differenceOfSums(int n, int m)
    {
        vector<int>first;
        vector<int>second;
        int i,j,k,sum1=0,sum2=0;
        for(i=1;i<=n;i++)
        {
            if(i%m!=0)
            {
                sum1=sum1+i;
            }
            else
            {
                 sum2=sum2+i;
            }
        }
        return sum1-sum2;
        
        
    }
};