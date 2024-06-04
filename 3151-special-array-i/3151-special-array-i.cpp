class Solution {
public:
    bool isArraySpecial(vector<int>& nums) 
    {
        int i,j,k,flag1=0,flag2=0,even=0,odd=0,diff;
        if(nums.size()==1)
        {
            return true;
        }

        
        if(nums[0]%2==0)
        {
            even=1;
        }
        else
        {
            odd=1;
            
        }
        if(even==1)
        {
        for(i=1;i<nums.size();i++)
        {
           diff=abs(nums[i]-nums[i-1]);
            if(diff%2==0)
            {
                return false;
            }

        }
            
        }
        else if (odd==1)
        {
                for(i=1;i<nums.size();i++)
        {
           diff=abs(nums[i]-nums[i-1]);
            if(diff%2==0)
            {
                return false;
            }

        }
            
        }
        return true;
    }
};