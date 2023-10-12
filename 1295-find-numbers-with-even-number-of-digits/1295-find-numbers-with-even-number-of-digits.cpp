class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        vector<int>result;
        int i,j,k,num,count=0,val,count1=0;
        for(i=0;i<nums.size();i++)
        {
            val=nums[i];
            while(val>0)
            {
                num=val%10;
                count++;
                val=val/10;
                
            }
            if(count%2==0)
            {
                result.push_back(nums[i]);
            }
            count=0;
            
        }
        return result.size();
        
        
    }
};