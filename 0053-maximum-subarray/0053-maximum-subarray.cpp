class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int i,j,maxi=INT_MIN,sum=0;
        i=0;
        for(j=i;j<nums.size();j++)
        {
            sum=sum+nums[j];
            
            if(sum>=maxi)
            {
                maxi=sum;
                i++;
            }
            if(sum<0)
            {
                sum=0;
                i++;
                
            }
        }
        return maxi;
    }
};