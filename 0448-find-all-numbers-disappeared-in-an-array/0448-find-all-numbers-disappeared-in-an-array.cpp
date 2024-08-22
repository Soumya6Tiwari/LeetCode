class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {   
      int n=nums.size();
        vector<int>v;
      int i,j,k;
      map<int,int>m;
      for(int i=0;i<nums.size();i++)
      {
          m[nums[i]]++;
      }
        for(i=1;i<=n;i++)
        {
            if(m.find(i)==m.end())
            {
                v.push_back(i);
            }
        }
        return v;
    }
};