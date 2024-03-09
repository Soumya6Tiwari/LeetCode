class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
      set<int>s1,s2;
        vector<int>v1,v2;
        map<int,int>m;
        int i,j,k,ans;
        for(i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        for(i=0;i<nums2.size();i++)
        {
            s2.insert(nums2[i]);
        }
        v1.assign(s1.begin(),s1.end());
        v2.assign(s2.begin(),s2.end());
        for(i=0;i<v2.size();i++)
        {
            v1.push_back(v2[i]);
        }
        sort(v1.begin(),v1.end());
        for(i=0;i<v1.size()-1;i++)
        {
            if(v1[i]==v1[i+1])
            {
                return v1[i];
            }
        }
        return -1;

        
    }        
        
};