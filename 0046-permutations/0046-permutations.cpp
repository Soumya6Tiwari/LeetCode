class Solution {
public:
    void calculate(vector<int>&nums,vector<int>&v,vector<vector<int>>&ans,int frequency_array_map[])
    {
        if(v.size()==nums.size())
        {
            ans.push_back(v);
        }
        
        for(int i=0;i<nums.size();i++)
        {
            // kya vo freuency_array me nums[i] exist karta h
            if(!frequency_array_map[i])
            {
                // pickup wala case
                v.push_back(nums[i]);
                frequency_array_map[i]=1;
                calculate(nums,v,ans,frequency_array_map);
                
                // not pickup wala case
                frequency_array_map[i]=0;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums)
    {
        // BRUTE FORCE APPROACH
      vector<vector<int>>ans;
      vector<int>v;
        int frequency_array_map[nums.size()];
      // this frequency array is initialized  with 0
        for(int j=0;j<nums.size();j++)
        {
            frequency_array_map[j]=0;
        }
       
        calculate(nums,v,ans,frequency_array_map);
        return ans;
        
        
    }
};