class Solution {
public:
    int tribonacci(int n) 
    {
        int i,j,k,ans=0;
        vector<int>result;
        result.push_back(0);
        result.push_back(1);
        result.push_back(1);
        if(n==0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        else if(n==2)
        {
            return 1;
            
        }
        else
        {
            for(i=3;i<=n;i++)
            {
                ans=result[i-1]+result[i-2]+result[i-3];
                result.push_back(ans);
            }
        }
        return result[n];
    }
};