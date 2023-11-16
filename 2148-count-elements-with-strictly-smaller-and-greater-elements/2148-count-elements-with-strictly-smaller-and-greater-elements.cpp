class Solution {
public:
    int countElements(vector<int>& nums)
    {
       int i,j,k,count=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1||nums.size()==2)
        {
            return 0;
            
        }
        for(i=1;i<=nums.size()-2;i++)
        {
            if(nums[i]>nums[0]&&nums[i]<nums[nums.size()-1])
            {  
        
                count++;
            }
            
        }
        return count;
    }
};