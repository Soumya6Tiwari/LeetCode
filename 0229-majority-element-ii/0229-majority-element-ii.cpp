class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int i,j,count=0;
        vector<int>result;
        vector<int>ans;
        set<int>s;
        int len=nums.size()/3;
        if(nums.size()==1)
        {
            return nums;
        }
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
            if(count>len)
            {
                ans.push_back(result[i]);
            }
            count=0;
        }
        return ans;
        
    }
};