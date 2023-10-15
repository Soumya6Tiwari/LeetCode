class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
      int i,j,max=0,max1=0;
      sort(nums.begin(),nums.end());
      reverse(nums.begin(),nums.end());
      int len=nums.size();

     return nums[k-1];
        
    }
};