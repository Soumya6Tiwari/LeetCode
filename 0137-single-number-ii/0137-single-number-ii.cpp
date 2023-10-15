class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        vector<int>result;
        int i,j,k,count=0;
        set<int>s;
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
            
            if(count==1)
            {
                k=result[i];
                break;
            }
            count=0;
        }
        return k;
        
    }
};