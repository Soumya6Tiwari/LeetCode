class Solution {
public:
    int maximumGap(vector<int>& nums) 
    {
        int i,j,k,maxi=INT_MIN,diff;
        if(nums.size()<2)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(i=1;i<nums.size();i++)
        {
            diff=nums[i]-nums[i-1];
            if(diff>=maxi)
            {
                maxi=diff;
            }
        }
        return maxi;
    }
};