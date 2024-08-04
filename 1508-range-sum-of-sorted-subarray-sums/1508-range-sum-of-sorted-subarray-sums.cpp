class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) 
    {
        vector<int>res,v1,ans;
        long long i,j,k,sum,val=0;
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                sum=sum+nums[j];
                res.push_back(sum);
            }
            
            sum=0;
        }
        sort(res.begin(),res.end());
        for(i=left-1;i<right;i++)
        {
            val=(val+res[i])%1000000007;
        }
        return (int)val;
    }
};