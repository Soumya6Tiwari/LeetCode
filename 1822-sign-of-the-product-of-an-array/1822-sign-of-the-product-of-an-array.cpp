class Solution {
public:
    int arraySign(vector<int>& nums) 
    {
        int i,j,k,count=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                return 0;
            }
            else if(nums[i]<0)
            {
                count++;
            }
        }
        if(count%2==0)
        {
            return 1;
        }
        return -1;
        
    }
};