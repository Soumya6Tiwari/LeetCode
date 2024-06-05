class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) 
    {
        map<int,int>m;
        vector<int>v;
        int i,j,k;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums[i].size();j++)
            {
                m[nums[i][j]]++;
            }
        }
        i=0;
        for(auto i:m)
        {
            if(i.second==nums.size())
            {
                v.push_back(i.first);
            }
        }
        return v;
    }
};