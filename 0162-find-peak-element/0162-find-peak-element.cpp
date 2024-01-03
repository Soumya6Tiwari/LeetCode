class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int i,j,maxi=INT_MIN,ans,sum=0,val;
        
        if(nums.size()==1)
        {
            return 0;
        }
        
    
            for(i=0;i<nums.size();i++)
            {
                if(nums[i]>maxi)
                {
                    maxi=nums[i];
                    ans=i;
                }
            }
        if(maxi==nums[0])
        {
            return ans;
        }
            
        
        for(i=1;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i-1]&&nums[i]>nums[i+1])
            {
                break;
            }
        }
        return i;
        
    }
};