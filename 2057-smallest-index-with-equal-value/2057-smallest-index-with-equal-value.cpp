class Solution {
public:
    int smallestEqual(vector<int>& nums) 
    {
        int i,j,k;
        vector<int>res;
        for(i=0;i<nums.size();i++)
        {
            if(i%10==nums[i])
            {
                res.push_back(i);
            }
        }
        if(res.size()==0)
        {
            return -1;
        }
        sort(res.begin(),res.end());
        return res[0];
        
    }
};