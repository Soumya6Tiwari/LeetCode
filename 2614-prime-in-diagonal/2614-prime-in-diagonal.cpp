class Solution {
public:
    bool check_prime(int val)
        {
            if(val<=1)
            {
                return false;
            }
            else
            {
                for(int k=2;k<=sqrt(val);k++)
                {
                    if(val%k==0)
                    {
                        return false;
                    }
                }
            }
            return true;
        } 
    int diagonalPrime(vector<vector<int>>& nums)
    {
      
        int i,j,k,max=0;
   
        vector<int>result;
        
        
        
       for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums[0].size();j++)
            {
                int n=nums[0].size()-1;
                if(i==j||i+j==n)
                {
                    result.push_back(nums[i][j]);
                    
                }
            }
        }
        sort(result.begin(),result.end());
      
        for(j=0;j<result.size();j++)
        {
            
            if(check_prime(result[j]))
            {
                if(result[j]>max)
                {
                    max=result[j];
                }
            }
        }
        return max;
    }
};