class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int i,j,sum=0,count=0;
        for(i=0;i<nums.size();i++)
        {
            for(j=i;j<nums.size();j++)
            {
                sum=sum+nums[j];
                if(sum==k)
                {
                    count++;
                    
                }
            }
                sum=0;
        }
        return count;
        
    }
};