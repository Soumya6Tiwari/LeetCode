class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) 
    {
        int i,j,k,val,max,sum=0;
        vector<int>res;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                val=abs(nums[i]-nums[j]);
                if(val<=min(nums[i],nums[j]))
                {
                    sum=nums[i]^nums[j];
                    res.push_back(sum);
                    
                }
            }
        }
        sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        return res[0];
        
    }
};