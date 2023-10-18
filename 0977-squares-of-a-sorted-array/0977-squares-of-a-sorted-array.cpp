class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int i,j,k,sq;
        vector<int>result;
        for(i=0;i<nums.size();i++)
        {
            sq=nums[i]*nums[i];
            result.push_back(sq);
        }
        sort(result.begin(),result.end());
        return result;
        
    }
};