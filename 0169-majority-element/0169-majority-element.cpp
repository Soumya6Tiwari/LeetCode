class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        map<int,int>m;
        int i,j,k,maxi=INT_MIN,ans;
        for(i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            if(i.second>=maxi)
            {
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
        
    }
};