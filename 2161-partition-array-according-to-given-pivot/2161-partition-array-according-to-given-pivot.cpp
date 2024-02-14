class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot)
    {
        vector<int>large,small,equal;
        int i,j,k;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]<pivot)
            {
                small.push_back(nums[i]);
            }
            else if(nums[i]==pivot)
            {
                equal.push_back(nums[i]);
            }
            else
            {
                large.push_back(nums[i]);
            }
        }
        for(i=0;i<equal.size();i++)
        {
            small.push_back(equal[i]);
        }
        for(i=0;i<large.size();i++)
           
        {
            small.push_back(large[i]);
        }
        return small;
    }
};