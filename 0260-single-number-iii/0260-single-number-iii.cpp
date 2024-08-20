class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
         // SELF THOUGHT PROCESS
        
        // vector<int>result;
        // vector<int>ans;
        //  vector<int>ans1;
        // set<int>s;
        // int i,j,k,num,val,count=0;
        // for(i=0;i<nums.size();i++)
        // {
        //     s.insert(nums[i]);
        // }
        // result.assign(s.begin(),s.end());
        // ans=result;
        // for(i=0;i<result.size();i++)
        // {
        //     for(j=0;j<nums.size();j++)
        //     {
        //         if(result[i]==nums[j])
        //         {
        //             count++;
        //         }
        //     }
        //     if(count==1)
        //     {
        //         ans1.push_back(result[i]);
        //     }
        //     count=0;
        // }
        // return ans1;
        
        
        //  USING THE MAP
        map<int, int>m;
        vector<int>ans;
        int i,j,k;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            if(it.second==1)
            {
                ans.push_back(it.first);
                

            }
        }
        return ans;
        
    }
};