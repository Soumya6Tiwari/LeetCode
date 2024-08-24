class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
       //OPTIMAL APPROACH - OBSERVATION BASED
        int pref=1,suff=1,i,j,k,maxi=INT_MIN;
        for(i=0;i<nums.size();i++)
        {
            if(pref==0)
            {
                pref=1;
            }
            if(suff==0)
            {
                suff=1;
            }
            pref=pref*nums[i];
            suff=suff*nums[nums.size()-i-1];
            maxi=max(maxi,max(pref,suff));
        }
          
        return maxi;
    }
};