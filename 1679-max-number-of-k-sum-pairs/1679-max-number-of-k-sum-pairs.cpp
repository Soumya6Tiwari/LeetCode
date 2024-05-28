class Solution {
public:
    int maxOperations(vector<int>& nums, int k) 
    {
        int i,j,count=0;
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        for(i=0;i<nums.size();)
        {
            if(i>=n)
            {
                break;
            }
            if(nums[i]+nums[n]==k)
            {
                count++;
                i++;
                n--;
            }
            else if(nums[i]+nums[n]<k)
            {
                i++;
            }
            else
            {
                n--;
            }
            }
        
        return count;
        
    }
};