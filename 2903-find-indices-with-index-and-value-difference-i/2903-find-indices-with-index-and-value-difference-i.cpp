class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) 
    {
        int i,j,k;
        vector<int>result;
        int diff1,diff2;
        for(i=0;i<nums.size();i++)
        {
            for(j=0;j<nums.size();j++)
            {
                diff1=abs(i-j);
                diff2=abs(nums[i]-nums[j]);
                if(diff1>=indexDifference && diff2>=valueDifference)
                {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
                
            }
        }
        result.push_back(-1);
        result.push_back(-1);
        return result;
        
    }
};