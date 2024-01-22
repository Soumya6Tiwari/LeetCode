class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
       int i,j,val,n=nums.size(),sum=0,sum1=0;
        map<int,int>m;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        i=0;
        for(auto i: m)
        {
            if(i.second!=1)
            {
                val=i.first;
                v.push_back(val);
            }
        }
        for(i=1;i<=n;i++)
        {
             sum=sum+i;            
        }
        for(i=0;i<nums.size();i++)
        {
            sum1=sum1+nums[i];
        }
        sum1=sum1-val;
        sum=sum-sum1;
        v.push_back(sum);
        return v;
        
     
        
    }
};