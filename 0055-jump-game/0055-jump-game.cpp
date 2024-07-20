class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int i,j,k,max_index=0;
        for(i=0;i<nums.size();i++)
        {
            if(i>max_index)
            {
                return false;
            }
            else
            {
                max_index=max(max_index,i+nums[i]);
            }
        }
        return true;
    }
};