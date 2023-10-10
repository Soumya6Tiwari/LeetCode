class Solution {
public:
    int sumOfSquares(vector<int>& nums) 
    {
        int i,j,k,temp;
        int sum=0;
        vector<int>result;
        int n=nums.size();
        for(i=0;i<nums.size();i++)
        {
            if(n%(i+1)==0)
            {
                
               result.push_back(nums[i]);
            }
        }
        for(i=0;i<result.size();i++)
        {
            sum=sum+result[i]*result[i];
        }
        return sum;
        
    }
};