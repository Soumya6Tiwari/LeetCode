class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int i,j,k;
        vector<int>result(2,-1);
        int f=result[0];
        int l=result[0];
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                if(f==-1)
                {
                    result[0]=i;
                    f=i;
                }
                if(l!=f)
                {
                    result[1]=i;
                }
            }
        }
        return result;
        
    }
};