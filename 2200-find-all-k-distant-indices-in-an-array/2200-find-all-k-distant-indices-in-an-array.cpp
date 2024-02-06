class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) 
    {
        vector<int>v,v1;
        set<int>s;
        int i,j;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]==key)
                {
                    if(abs(i-j)<=k)
                    {
                        v1.push_back(i);
                    }
                }
            }
        }
        for(i=0;i<v1.size();i++)
        {
            s.insert(v1[i]);
        }
        v1.clear();
        v1.assign(s.begin(),s.end());
        return v1;
        
    }
};