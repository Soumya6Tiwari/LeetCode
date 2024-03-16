class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums)
    {
        vector<int>res,left,right;
        int l=1,r=1,i,j,k,val=1;
        for(i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                l=1;
                left.push_back(l);
            }
            else
            {
                l=l*nums[i-1];
                left.push_back(l);
                
            }
        }
        reverse(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            if(i==0)
            {
                r=1;
                right.push_back(r);
            }
            else
            {
                r=r*nums[i-1];
                right.push_back(r);
                
            }
        }
        reverse(right.begin(),right.end());
        for(i=0;i<nums.size();i++)
        {
            res.push_back(left[i]*right[i]);
        }
        
        return res;
    }
};