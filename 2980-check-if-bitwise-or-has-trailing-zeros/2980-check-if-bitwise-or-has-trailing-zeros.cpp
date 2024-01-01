class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums)
    {
        int i,j,k;
        for(i=0;i<nums.size()-1;i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if((nums[i]|nums[j])%2==0)
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};