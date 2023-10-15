class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        int i,j,k,max=0,val;
        vector<bool>result;
        for(i=0;i<candies.size();i++)
        {
            if(candies[i]>=max)
            {
                max=candies[i];
            }
        }
        for(i=0;i<candies.size();i++)
        {
            val=candies[i]+extraCandies;
            if(val>=max)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};