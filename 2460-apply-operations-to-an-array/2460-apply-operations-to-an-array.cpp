class Solution {
public:
    vector<int> applyOperations(vector<int>& nums)
    {
        int i,j,k;
        vector<int>zero,num;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                num.push_back(nums[i]);
            }
            else
            {
                zero.push_back(nums[i]);
            }
        }
        for(i=0;i<zero.size();i++)
        {
            num.push_back(zero[i]);
        }
        return num;
    }
};