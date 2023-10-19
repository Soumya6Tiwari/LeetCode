class Solution {
public:
    int kthFactor(int n, int k) 
    {
        int i,j,p;
        vector<int>result;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                result.push_back(i);
            }
        }
        if(result.size()>=k)
        {
            return result[k-1];
        }
        return -1;
        
    }
};