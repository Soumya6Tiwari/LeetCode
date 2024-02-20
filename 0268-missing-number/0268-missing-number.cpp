class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int i,j,k,sum=0,sum1=0,number;
        i=0;
        while(i<=nums.size())
        {
            sum=sum+i;
            i++;
        }
        for(i=0;i<nums.size();i++)
        {
            sum1=sum1+nums[i];
        }
        number=sum-sum1;
        return number;
        
    }
};