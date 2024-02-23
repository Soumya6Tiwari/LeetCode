class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        set<int>s1;
        vector<int>v1,v2;
        vector<vector<int>>v;
        int i,j,k,flag1=0,flag2=0;
        for(i=0;i<nums1.size();i++)
        {
            s1.insert(nums1[i]);
        }
        nums1.clear();
        nums1.assign(s1.begin(),s1.end());
        s1.clear();
        for(i=0;i<nums2.size();i++)
        {
            s1.insert(nums2[i]);
        }
        nums2.clear();
        nums2.assign(s1.begin(),s1.end());
        
        for(i=0;i<nums1.size();i++)
        {
            for(j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    flag1=1;
                    break;
                }
            }
            if(flag1==0&&j==nums2.size())
            {
                v1.push_back(nums1[i]);
                
            }
            flag1=0;
        }
        flag1=0;
        for(i=0;i<nums2.size();i++)
        {
            for(j=0;j<nums1.size();j++)
            {
                if(nums2[i]==nums1[j])
                {
                    flag1=1;
                    break;
                }
            }
            if(flag1==0&&j==nums1.size())
            {
                v2.push_back(nums2[i]);
                
            }
            flag1=0;
        }
        v.push_back(v1);
        v.push_back(v2);
        return v;
        
        
    }
};