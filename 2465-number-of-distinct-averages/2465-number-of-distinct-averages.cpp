class Solution {
public:
    int distinctAverages(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());
        int i,j,k;
        float avg;
        
        set<float>s;
        j=nums.size()-1;
        for(i=0;i<nums.size()/2;i++)
        {
            if(i<=j)
            {
                avg=(nums[i]+nums[j])/2.0;
                s.insert(avg);
            }
            
            j--;
        }
        return s.size();
    }
};