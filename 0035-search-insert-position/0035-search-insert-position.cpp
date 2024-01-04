class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        // int start,last,mid,val,i,j,k;
        // start=0;
        // last=nums.size()-1;
        // while(start<=last)
        // {
        //     mid=(start+last)/2;
        //     if(nums[mid]==target)
        //     {
        //         val= mid;
        //     }
        //     else
        //     {
        //         if(target<nums[mid])
        //         {
        //             last=mid;
        //         }
        //         if(target>nums[mid])
        //         {
        //             start=mid;
        //         }
        //     }
        // }
        // // nums.push_back()
        // return val;
        
        int i,j,k;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        if(i==nums.size())
        {
            for(i=0;i<nums.size();i++)
            {
                if(target<nums[0])
                {
                    return 0;
                }
                if(target>nums[nums.size()-1])
                {
                    return nums.size();
                }
                else
                {
                    if(target<nums[i])
                    {
                        break;
                    }
                }
            }
        }
        return i;
        
    }
};