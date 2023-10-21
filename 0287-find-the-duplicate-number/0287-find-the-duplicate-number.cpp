class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int i,j,k;
        int ans;
        sort(nums.begin(),nums.end());
        
        for(i=0;i<nums.size()-1;i++)
        {
            
                if(nums[i]==nums[i+1])
                {
                    ans=nums[i];
                    break;
                }
            
        }
        return ans;
        
    }
};