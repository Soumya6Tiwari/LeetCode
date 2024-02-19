class Solution {
public:
    int findMiddleIndex(vector<int>& nums)
    {
        int i,j,k,left=0,right=0,sum=0;
        for(i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
        }
        for(i=0;i<nums.size();i++)
        {
            
            if(i==0)
            {
                left=0;
            }
            else
            {
                left=left+nums[i-1];
            }
            if(i==nums.size()-1)
            {
                right=0;
            }
            else
            {
            right=sum-left-nums[i];
            }
            if(left==right)
            {
                return i;
            }
           
            
        }
        return -1;
        
    }
};