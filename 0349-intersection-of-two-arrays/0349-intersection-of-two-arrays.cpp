class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
      vector<int>result;
      set<int>s;
      int i,j,k;
      for(i=0;i<nums1.size();i++)
      {
        for(j=0;j<nums2.size();j++)
        {
          if(nums1[i]==nums2[j])
          {
            result.push_back(nums1[i]);
          }
        }
      }

      // vector to set conversion
      for(i=0;i<result.size();i++)
      {
        s.insert(result[i]);
      }

      // set to vector conversion
      for(i=0;i<s.size();i++)
      {
        result.assign(s.begin(), s.end());
      }
      return result;


        
    }
};