class Solution {
public:
    int climbStairs(int n) 
    {
        
        //FIRST APPROACH
        
        int i,j,k,ans=0;
        vector<int>result;
        result.push_back(1);
        result.push_back(1);
        if(n==0)
        {
            return 1;
        }
        if(n==1)
        {
            return 1;
        }
        if(n>=2)
        {
            for(i=2;i<=n;i++)
            {
                ans=result[i-1]+result[i-2];
                result.push_back(ans);
            }
        }
        return result[n];
        
        
        
        //SECOND APPROACH ie FIBONACCI SERIES
        // int i,j,tot;
        // if(n==0)
        // {
        //     return 1;
        // }
        // if(n==1)
        // {
        //     return 1;
        // }
        // return (climbStairs(n-1)+climbStairs(n-2));
    }
};