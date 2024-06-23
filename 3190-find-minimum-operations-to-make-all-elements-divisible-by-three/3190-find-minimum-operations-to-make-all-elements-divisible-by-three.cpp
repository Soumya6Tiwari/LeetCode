class Solution {
public:
    int minimumOperations(vector<int>& nums) 
    {
        int count=0;
        int i,j,k;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]%3!=0)
            {
                count++;
            }
        }
        return count;
        
    }
};