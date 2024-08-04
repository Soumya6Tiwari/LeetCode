class Solution {
public:
    void calculate(vector<int>&nums,int index, vector<int>&v,vector<vector<int>>&v1)
    {
        if(index==nums.size())
        {
            v1.push_back(v);
            return;
        }
        
        // pickup case
        v.push_back(nums[index]);
        
        calculate(nums,index+1,v,v1);
        // not pickup case
        v.pop_back();
        calculate(nums,index+1,v,v1);
        
    }
    int subsetXORSum(vector<int>& nums) 
    {
        int index=0;
        int xor_sum=0,ans=0;
        vector<int>v,res,val;
        vector<vector<int>>v1;
        calculate(nums,index,v,v1);
        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v1[i].size();j++)
            {
               xor_sum=xor_sum^v1[i][j];
                
            }
            res.push_back(xor_sum);
            xor_sum=0;
        }
        for(int i=0;i<res.size();i++)
        {
            ans=ans+res[i];
        }
        return ans;
    }
};