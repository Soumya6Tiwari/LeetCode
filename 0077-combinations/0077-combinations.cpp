class Solution {
public:
    void calculate(vector<int>&nums,int index,int k,vector<int>&v,vector<vector<int>>&res)
    {
        if(index==nums.size())
        {
            if(v.size()==k)
            {
                res.push_back(v);
            }
            return;
        }
        
        // to pick case
        v.push_back(nums[index]);
        calculate(nums,index+1,k,v,res);
        
        // not to pick case
        v.pop_back();
        calculate(nums,index+1,k,v,res);
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<int>nums,v;
        vector<vector<int>>res;
        int i,j,index=0;
        for(i=1;i<=n;i++)
        {
            nums.push_back(i);
        }
        
        calculate(nums,index,k,v,res);
        return res; 
    }
};