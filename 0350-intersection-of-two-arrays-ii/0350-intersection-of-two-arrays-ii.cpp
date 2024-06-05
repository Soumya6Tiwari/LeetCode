class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
      map<int,int>m;
      vector<int>ans;
        int i,j,k;
        for(i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(i=0;i<nums2.size();i++)
        {
            auto iterator=m.find(nums2[i]);
            if(iterator!=m.end()&&iterator->second>0)
            {
                ans.push_back(nums2[i]);
                iterator->second--;
            }
        }
        return ans;
    }
};