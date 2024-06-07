class Solution {
public:
    int minPairSum(vector<int>& nums)
    {
        int i,j,k,sum=0;
        vector<int>result;
        j=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()/2;i++)
        {
            
                sum=nums[i]+nums[j];
                result.push_back(sum);
                j--;
            
        }
        sort(result.begin(),result.end());
        reverse(result.begin(),result.end());
        return result[0];
    }
};