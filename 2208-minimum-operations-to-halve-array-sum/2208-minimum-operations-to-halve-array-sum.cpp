class Solution {
public:
    int halveArray(vector<int>& nums)
    {
        int count=0;
        int i,j,k;
        double val,res,sum=0.0,ans;
        priority_queue<double>pq;
        for(i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            pq.push(nums[i]);
        }
        ans=sum/2;
        
        while(sum>ans)
        {
            res=pq.top()/2;
            sum=sum-pq.top()+res;
            pq.pop();
            pq.push(res);
            count++;
            
        }
        return count;
        
    }
};