class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int i;
        vector<int>result;
        vector<int>result1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                result.push_back(nums[i]);
            }
            else{
                result1.push_back(nums[i]);
            }
        }
        for(i=0;i<result1.size();i++)
        {
            result.push_back(result1[i]);
        }
        return result;
        
        
    }
};