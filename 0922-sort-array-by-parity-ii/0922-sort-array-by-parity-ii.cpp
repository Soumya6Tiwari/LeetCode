class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums)
    {
        int i,j=0,k=0;
        int len=nums.size();
        vector<int>odd;
        vector<int>even;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        nums.clear();
        for(i=0;i<len;i++)
        {
            if(i%2==0)
            {
                nums.push_back(even[j]);
                j++;
            }
            else
            {
                nums.push_back(odd[k]);
                k++;
            }
                 
        }
        return nums;
        
    }
};