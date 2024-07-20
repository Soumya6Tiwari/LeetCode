class Solution {
public:
    int jump(vector<int>& nums)
    {
        int jumps_count=0,l=0,r=0,i,j,k,farthest=0;
        if(nums.size()==1)
        {
            return 0;
        }
        while(r<=nums.size()-1)
        {
            for(i=l;i<=r;i++)
            {
                farthest=max(farthest,i+nums[i]);
            }
            l=r+1;
            r=farthest;
            jumps_count++;
             if(r==nums.size()-1)
            {
                break;
             }
        }
        return jumps_count++;
        
    }
};