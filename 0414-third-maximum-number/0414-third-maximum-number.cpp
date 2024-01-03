class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        int i,j,k;
        set<int>s;
        vector<int>v;
        
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
    
        v.assign(s.begin(),s.end());
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        if(v.size()<3)
        {
            return v[0];
        }
        
        return v[2];
        
    }
};