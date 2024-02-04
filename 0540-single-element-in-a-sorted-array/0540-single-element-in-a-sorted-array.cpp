class Solution {
public:
    int singleNonDuplicate(vector<int>& nums)
    {
        int i,res;
        map<int,int>m;
        for( i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        i=0;
        for(auto i:m)
        {
            if(i.second==1)
            {
                res=i.first;
                break;
            }
        }
        return res; 
    }
};