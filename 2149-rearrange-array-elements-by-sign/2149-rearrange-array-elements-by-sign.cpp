class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) 
    {
        int i,j,k=0,l=0;
        vector<int>pos;
        vector<int>neg;
        vector<int>res;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                pos.push_back(nums[i]);
            }
            else
            {
                neg.push_back(nums[i]);
            }
        }
        // reverse(pos.begin(),pos.end());
        // reverse(neg.begin(),neg.end());
        for(i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                res.push_back(pos[k]);
                k++;
            }
            else
            {
                res.push_back(neg[l]);
                l++;
            }
        }
        return res;
    }
};