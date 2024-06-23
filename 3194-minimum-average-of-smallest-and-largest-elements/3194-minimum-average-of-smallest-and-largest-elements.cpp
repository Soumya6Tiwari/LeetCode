class Solution {
public:
    double minimumAverage(vector<int>& nums) 
    {
        int i,j,k;
        double ans,avg;
        vector<double>d;
        sort(nums.begin(),nums.end());
        j=nums.size()-1;
        for(i=0;i<nums.size();)
        {
            if(i<j)
            {
            avg=(nums[i]+nums[j])/2.0;
            d.push_back(avg);
            }
            j--;
            i++;
        }
        sort(d.begin(),d.end());
        ans=d[0];
        return ans;
        
    }
};