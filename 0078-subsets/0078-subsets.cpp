class Solution {
public:
    // void generate_subsets(int index, vector<int>&nums, vector<int>&v, vector<vector<int>>&ans)
    // {
    //     if(index==nums.size())
    //     {
    //         ans.push_back(v);
    //         return;
    //     }
    //      // take the index or include the particular char in subsequence
    //     v.push_back(nums[index]);
    //     generate_subsets(index+1,nums,v,ans);
    //     // remove the index or do not take the particular char in subsequence
    //     v.pop_back();
    //     generate_subsets(index+1,nums,v,ans);
    // }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        // METHOD 1: Through the use of recursion 
        
        // vector<int>v;
        // vector<vector<int>>ans;
        // generate_subsets(0,nums,v,ans);
        // return ans;
        
        
        // METHOD 2: Through the use of BIT MANIPULATION
        
        vector<vector<int>>ans;
        vector<int>res;
        int i,j,k,n;
        n=nums.size();
        int no_of_subsets= 1<<n;           // 1<<n means 2^n
        for(i=0;i<no_of_subsets;i++)
        {
            for(j=0;j<n;j++)
            {
                if ((i & (1 << j)) != 0) 
                {
                    res.push_back(nums[j]);
                }
            }
            ans.push_back(res);
            res.clear();
        }
        return ans;
    }
};