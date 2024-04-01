class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) 
    {
        int i,j,k,count=0;
        string str="";
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                str=nums[i]+nums[j];
                if(str==target&&i!=j)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};