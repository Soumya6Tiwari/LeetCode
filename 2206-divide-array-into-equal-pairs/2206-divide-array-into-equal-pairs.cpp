class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        int i,j,r_sum=0,len,count=0;
        len=nums.size();
        sort(nums.begin(),nums.end());
        set<int>s;
        for(i=0;i<len;i++)
        {
            s.insert(nums[i]);
        }
        vector<int>v;
        v.assign(s.begin(),s.end());
        for(i=0;i<v.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(v[i]==nums[j])
                {
                    count++;
                }
            }
            if(count%2!=0)
            {
                return false;
            }
            else
            {
                count=0;
            }
        }
        
        
           
//         for(i=0;i<nums.size();i++)
//         {
//             xor_sum=xor_sum^nums[i];
//         }
        
//         if(xor_sum==0)
//         {
//             return true;
//         }
        
        return true;
        
    }
};