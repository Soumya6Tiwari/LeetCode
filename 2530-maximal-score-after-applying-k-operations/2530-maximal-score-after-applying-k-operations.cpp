class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) 
    {
        priority_queue<long long>pq;
        int i,j;
        long long val,ans,res,sum=0;
        for(i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while(k>0)
        {
            val=pq.top();
            if(val%3==0)
            {
                ans=val/3;
            }
            else
            {
                ans=(val/3)+1;
            }
            
            sum=sum+val;
            pq.pop();
            pq.push(ans);
            k--;
            
        }
        return sum;
        
    }
};