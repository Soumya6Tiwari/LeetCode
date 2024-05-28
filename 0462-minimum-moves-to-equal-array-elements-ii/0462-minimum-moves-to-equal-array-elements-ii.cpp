class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        long i,j,k,len,median,steps=0,val1,val2;
        len=nums.size();
        if(len%2!=0)
        {
            median=len/2;
            for(i=0;i<nums.size();i++)
            {
                if(nums[i]<=nums[median])
                {
                    steps=steps+nums[median]-nums[i];
                }
                else
                {
                    steps=steps+nums[i]-nums[median];
                }
            }
            return steps;
        }
        else
        {
            val1=len/2;
            val2=val1-1;
            median=(nums[val1]+nums[val2])/2;
            for(i=0;i<nums.size();i++)
            {
                if(nums[i]<=median)
                {
                    steps=steps+median-nums[i];
                }
                else
                {
                    steps=steps+nums[i]-median;
                }
            }
        }
        return (int)steps;
        
    }
};