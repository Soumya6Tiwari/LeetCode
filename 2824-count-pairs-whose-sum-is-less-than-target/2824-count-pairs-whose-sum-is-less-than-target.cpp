class Solution {
public:
    int countPairs(vector<int>& nums, int target)
    {
        int i,j,sum=0,count=0;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if((nums[i]+nums[j])<target)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};