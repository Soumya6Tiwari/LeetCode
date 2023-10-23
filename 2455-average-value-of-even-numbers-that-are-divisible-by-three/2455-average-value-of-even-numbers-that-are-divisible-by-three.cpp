class Solution {
public:
    int averageValue(vector<int>& nums)
    {
        int i,j,k,ans=0,count=0,sum=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0&&nums[i]%3==0)
            {
                sum=sum+nums[i];
                count++;
            }
        }
        if(count!=0)
        {
        ans=sum/count;
        return ans;
        }
        return 0;
        
    }
};