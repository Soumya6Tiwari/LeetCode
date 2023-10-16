class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        vector<int>result;
        vector<int>ans;
         vector<int>ans1;
        set<int>s;
        int i,j,k,num,val,count=0;
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        result.assign(s.begin(),s.end());
        ans=result;
        for(i=0;i<result.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(result[i]==nums[j])
                {
                    count++;
                }
            }
            if(count==1)
            {
                ans1.push_back(result[i]);
            }
            count=0;
        }
        return ans1;
        
    }
};