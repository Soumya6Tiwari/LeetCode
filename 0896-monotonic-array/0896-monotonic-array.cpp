class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        // int i,j,k;
        // bool ans;
        // if(nums[1]>=nums[0])
        // {
        //     for(i=0;i<nums.size()-1;i++)
        //     {
        //        if(nums[i+1]>=nums[i])
        //        {
        //            ans=true;
        //        }
        //         else
        //         {
        //             ans=false;
        //             break;
        //         }
        //     }
        // }
        // else
        // {
        //     for(i=0;i<nums.size()-1;i++)
        //     {
        //        if(nums[i+1]<=nums[i])
        //        {
        //            ans=true;
        //        }
        //         else
        //         {
        //             ans=false;
        //             break;
        //         }
        //     }
        // }
        // return ans;
        
        int i,j,k,signal=0,signal1=0;
        // reverse(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]>nums[i])
            {
                    
                signal=1;
                if(signal1==1)
                {
                    return false;
                }
                
            }
            else if(nums[i+1]<nums[i])
            {
                signal1=1;
                if(signal==1)
                {
                    return false;
                }
            }
            
            
        }
        return true;
        
        
    }
    
};