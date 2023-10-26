class Solution {
public:
    int repeatedNTimes(vector<int>& nums)
    {
        int i,j,k,len;
        vector<int>result;
        set<int>s;
        int ans,count=0;
        len=nums.size()/2;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        result.assign(s.begin(),s.end());
        for(i=0;i<result.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(result[i]==nums[j])
                {
                    count++;
                }
            }
            if(count==len)
            {
                ans=nums[i];
                break;
            }
            count=0;
        }
        return ans;
        
    }
};