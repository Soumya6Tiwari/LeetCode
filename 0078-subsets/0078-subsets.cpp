class Solution {
public:
    void generate_subsets(int index, vector<int>&nums, vector<int>&v, vector<vector<int>>&ans)
    {
        if(index==nums.size())
        {
            ans.push_back(v);
            return;
        }
         // take the index or include the particular char in subsequence
        v.push_back(nums[index]);
        generate_subsets(index+1,nums,v,ans);
        // remove the index or do not take the particular char in subsequence
        v.pop_back();
        generate_subsets(index+1,nums,v,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<int>v;
        vector<vector<int>>ans;
        generate_subsets(0,nums,v,ans);
        return ans;
        
    }
};