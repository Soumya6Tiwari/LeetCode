class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) 
    {
        int i,j,k,val,num,prod=1,flag=1;
        sort(nums.begin(),nums.end());
        
        while(flag==1)
        {
             for(i=0;i<nums.size();i++)
            {
                if(nums[i]==original)
                {
                    flag=1;
                    break;
                }
                else
                {
                    flag=0;
                }
            }
            if(i==nums.size())
            {
                val=original;
                break;
            }
            original=original*2;
           
        }
        return val;
    }
};