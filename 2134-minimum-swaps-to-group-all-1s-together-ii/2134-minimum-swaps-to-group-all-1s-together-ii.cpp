class Solution {
public:
    int minSwaps(vector<int>& nums) 
    {
        int count1=0,count=0,maxi;
        int i,j,k,ws;
        // for loop for counting the no.of ones in the array
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count1++;
            }
        }
        // so our window size becomes equal to the no.of ones
        ws=count1;
        int curr=0;
        for(i=0;i<ws;i++)
        {
            if(nums[i]==1)
            {
                curr=curr+nums[i];
            }
        }
        maxi=curr;
        
        
        for(i=0;i<nums.size();i++)
        {
            // curr me se purane wale ko hata do
            curr=curr-nums[i];
            // curr me naya wale ko add kardo
            curr=curr+nums[(i+ws)%nums.size()];
            maxi=max(maxi,curr);
            
            
            
        }
        return ws-maxi;
    }
};