class Solution {
public:
    void sortColors(vector<int>& nums)
    {
       // DUTCH NATIONAL FLAG ALGORITHM (STRIVER'S SHEET)
        int low=0,mid=0,high=nums.size()-1,i,j,k;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                 mid++;
                 low++;
            }
            else if(nums[mid]==1)
            {
                  mid++;   
            }
            else
            {
                 swap(nums[mid],nums[high]);
                 high--;
            }
        }
      
        
    }
};