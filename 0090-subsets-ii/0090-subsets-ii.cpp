class Solution {
public:
    void calculate(vector<int>&nums,int n,int index,vector<int>v,set<vector<int>>&s)
    {
        if(index==n)
        {
            s.insert(v);
            return;
        }
        // pick up case
        v.push_back(nums[index]);
        calculate(nums,n,index+1,v,s);
        v.pop_back();
        calculate(nums,n,index+1,v,s);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>>s;
        vector<int>v;
        int index=0;
        int n=nums.size();
        calculate(nums,n,index,v,s);
        ans.assign(s.begin(),s.end());
        return ans;
        
    }
};