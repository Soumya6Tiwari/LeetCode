class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int i,j,k,max=0,val=0;
        for(i=0;i<nums.size()-1;i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                val=(nums[i]-1)*(nums[j]-1);
                if(val>=max)
                {
                    max=val;
                }
            }
        }
        return max;
        
    }
};