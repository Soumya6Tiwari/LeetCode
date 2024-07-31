class Solution {
public:
    void calculate(vector<int>&nums,set<vector<int>>&ans,int index)
    {
        if(index==nums.size())
        {
            ans.insert(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            
        
            swap(nums[index],nums[i]);
            calculate(nums,ans,index+1);
            
            // used for backtracking
            swap(nums[index],nums[i]);
               
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int index=0;
        set<vector<int>>ans;
        vector<vector<int>>res;
        calculate(nums,ans,index);
        res.assign(ans.begin(),ans.end());
        return res;
        
    }
};