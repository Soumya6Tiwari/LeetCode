class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        // BRUTE FORCE APPROACH
        
        // int i,j;
        // vector<int>v(nums.size(),-1);
        // for(i=0;i<nums.size();i++)
        // {
        //     v[(i+k)%nums.size()]=nums[i];
        // }
        // for(i=0;i<v.size();i++)
        // {
        //     nums[i]=v[i];
        // }
        
        // OPTIMAL APPROACH
        int n=nums.size();
        k=k%n;
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
        
    }
};