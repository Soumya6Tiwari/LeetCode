class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) 
    {
        
        int i,j,pro=1,count=0;
        for(i=0;i<nums.size();i++)
        {
            for(j=i;j<nums.size();j++)
            {
                pro=pro*nums[j];
                if(pro>=k)
                {
                    pro=1;
                    break;
                    
                }
                if(pro<k)
                {
                    count++;
                }
                
            }
            pro=1;
        }
        return count;
    }
};