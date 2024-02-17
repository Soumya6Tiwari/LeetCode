class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int i,j,k,maxi=INT_MIN,count=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
            }
            else if(nums[i]==0)
            {
                maxi=max(maxi,count);
                count=0;
            }
        }
        maxi=max(maxi,count);
        return maxi;
        
    }
};