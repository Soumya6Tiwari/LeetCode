class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) 
    {
        int i,j,k;
        vector<int>res;
        int count=0;
        for(i=0;i<nums.size()-1;i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j]&&nums[i]!=-1&&nums[j]!=-1)
                {
                    count++;
                    nums[i]=-1;
                    nums[j]=-1;
                    break;
                }
            }
        }
        res.push_back(count);
        count=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=-1)
            {
                count++;
            }
        }
        res.push_back(count);
        return res;
    }
};