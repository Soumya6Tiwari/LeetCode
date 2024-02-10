class Solution {
public:
    vector<int> numberGame(vector<int>& nums) 
    {
        vector<int>res,alice,bob;
        int i,j,k=0,l=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                alice.push_back(nums[i]);
            }
            else
            {
                bob.push_back(nums[i]);
            }
        }
        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                res.push_back(bob[k]);
                k++;
            }else
            {
                res.push_back(alice[l]);
                l++;
            }
        }
        return res;
        
    }
};