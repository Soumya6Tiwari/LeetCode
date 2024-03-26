class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int i,j,k,ans,flag=0,start,end;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                flag=1;
                start=i;
                end=nums.size()-1;
                break;
            }
            
        }
        if(flag==0)
        {
           return 1;   
        }
        flag=0;
        for(j=i;j<nums.size()-1;j++)
        {
            if(nums[j+1]-nums[j]>1)
            {
                return nums[j]+1;
            }
        }
        return nums[j]+1;
        
    }
};