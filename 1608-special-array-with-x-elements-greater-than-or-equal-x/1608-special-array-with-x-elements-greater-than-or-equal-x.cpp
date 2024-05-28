class Solution {
public:
    int specialArray(vector<int>& nums)
    {
        int i,j,k,len,count=0;
        len=nums.size();
        for(i=0;i<=len;i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]>=i)
                {
                    count++;
                }
            }
            if(count==i)
            {
                return count;
            }
            else
            {
                count=0;
            }
        }
        return -1;
    }
};