class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
//         int i,j,count=0;
//         vector<int>result;
//         vector<int>ans;
//         set<int>s;
//         for(i=0;i<nums.size();i++)
//         {
//             s.insert(nums[i]);
//         }
//         ans.assign(s.begin(),s.end());
//         for(i=0;i<ans.size();i++)
//         {
//             for(j=0;j<nums.size();j++)
//             {
//                 if(ans[i]==nums[j])
//                 {
//                     count++;
//                 }
//             }
//             if(count==2)
//             {
//                 result.push_back(ans[i]);
//             }
//             count=0;
//         }
//         return result;
        
        int i,j,k;
        vector<int>res;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                res.push_back(nums[i]);
            }
        }
        return res;
        
        
    }
};