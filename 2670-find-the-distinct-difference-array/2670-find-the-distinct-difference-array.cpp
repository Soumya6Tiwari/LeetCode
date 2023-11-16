class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) 
    {
        int i,j,k,diff,pref=1,suff;
        vector<int>res;
        set<int>s,s1;
        int len=nums.size();
        
        for(i=0;i<len;i++)
        {
            for(k=0;k<=i;k++)
            {
                s1.insert(nums[k]);
            }
            pref=s1.size();
            s1.clear();
            for(j=i+1;j<len;j++)
            {
                s.insert(nums[j]);
            }
            suff=s.size();
            diff=pref-suff;
            s.clear();
            res.push_back(diff);
        }
        return res;
        
        
    }
};