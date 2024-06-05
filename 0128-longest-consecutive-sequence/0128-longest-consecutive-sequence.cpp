class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size()==0)
        {
            return 0;
        }
       set<int>s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
         nums.clear();
        nums.assign(s.begin(),s.end());
        int i,j,k,count=0,maxi=INT_MIN;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1)
            {
                count++;
                if(count>maxi)
                {
                    maxi=count;
                }
            }
            else
            {
                count=0;
            }
            
        }
        if(maxi==INT_MIN)
        {
            return 1;
        }
        return maxi+1;
        
    }
};