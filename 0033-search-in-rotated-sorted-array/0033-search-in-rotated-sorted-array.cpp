class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int i,j,k;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                return i;
            }
        }
        return -1;
        
    }
};