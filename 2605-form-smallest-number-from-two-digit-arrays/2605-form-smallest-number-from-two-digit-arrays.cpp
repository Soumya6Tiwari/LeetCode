class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>common;
        int i,j,k,ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(i=0;i<nums1.size();i++)
        {
            for(j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    common.push_back(nums1[i]);
                    break;
                }
            }
        }
        if(common.size()>0)
        {
            return common[0];
        }
        int first,second;
        first=nums1[0];
        second=nums2[0];
        if(first<second)
        {
        ans=first*10+second;
        }
        else
        {
            ans=second*10+first;
        }
        return ans;
        
    }
};