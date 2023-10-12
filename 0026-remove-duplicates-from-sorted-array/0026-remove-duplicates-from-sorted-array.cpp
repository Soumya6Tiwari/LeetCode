class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int i,j,k;
        vector<int>result;
        set<int>s;
        for(i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        nums.clear();
        nums.assign(s.begin(),s.end());
        return nums.size();
    }
};