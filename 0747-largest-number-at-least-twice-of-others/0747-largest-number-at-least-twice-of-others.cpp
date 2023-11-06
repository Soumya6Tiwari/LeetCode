class Solution {
public:
    int dominantIndex(vector<int>& nums) 
    {
        int i,j,k,val,num,ans;
        vector<int>res;
        res=nums;
        sort(nums.begin(),nums.end());
        val=nums[nums.size()-2]*2;
        if(nums[nums.size()-1]<val)
        {
            return -1;
        }
        else
        {
            ans=nums[nums.size()-1];
          
        }
        for(i=0;i<res.size();i++)
        {
            if(res[i]==ans)
            {
                break;
            }
        }
        return i;
        
        
    }
};