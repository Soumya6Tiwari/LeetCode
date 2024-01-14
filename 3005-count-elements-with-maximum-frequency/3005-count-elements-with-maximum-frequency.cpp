class Solution {
public:
    int maxFrequencyElements(vector<int>& nums)
    {
        int i,j,maxi=INT_MIN;
        map<int,int>m;
        vector<int>v;
        set<int>s;
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
            m[nums[i]]++;
        }
        if(s.size()==nums.size())
        {
            return nums.size();
        }
        i=0;
        for(auto i:m)
        {
            if(i.second>=maxi)
            {
               
                maxi=i.second;
            }
            
        }
        i=0;
        for(auto i:m)
        {
            if(i.second==maxi)
            {
                 for(j=0;j<maxi;j++)
                {
                    v.push_back(i.first);
                }
            }
        }
        return v.size();
        
    }
};