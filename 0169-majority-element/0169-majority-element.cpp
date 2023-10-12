class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int i,j,k;
        vector<int>result;
        int ans;
        set<int>s;
        int max=0,count=0;
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        result.assign(s.begin(),s.end());
        sort(result.begin(),result.end());
        for(i=0;i<result.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(result[i]==nums[j])
                {
                    count++;
                }
            }
            if(count>=max)
            {
                max=count;
                ans=result[i];
            }
            count=0;
        }
        return ans;
        
    }
};