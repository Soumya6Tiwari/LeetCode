class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks)
    {
        vector<int>remaining;
        int i,j,k,val,count=0;
        for(i=0;i<capacity.size();i++)
        {
            val=capacity[i]-rocks[i];
            remaining.push_back(val);
        }
        sort(remaining.begin(),remaining.end());
        for(i=0;i<remaining.size();i++)
        {
            if(remaining[i]<=additionalRocks)
            {
                count++;
                additionalRocks=additionalRocks-remaining[i];
            }
        }
        return count;
        
    }
};