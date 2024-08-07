class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        
        int f=0,s=1,i,j,temp;
        int n=nums.size();
        while(f<n&&s<n)
        {
            if(nums[f]!=0&&nums[s]==0)
            {
                f++;
                s++;
            }
            else if(nums[f]==0&&nums[s]!=0)
            {
                swap(nums[f],nums[s]);
                f++;
                s++;
            }
            else if(nums[f]==0&&nums[s]==0)
            {
                s++;
            }
            else if(nums[f]!=0&&nums[s]!=0)
            {
                f++;
                s++;
            }
                
        }
        
    }
};