class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        int i,j,k;
        vector<string>result;
        vector<int>values;
        values=heights;
        sort(heights.begin(),heights.end());
        reverse(heights.begin(),heights.end());
        for(i=0;i<heights.size();i++)
        {
            for(j=0;j<values.size();j++)
            {
                if(heights[i]==values[j])
                {
                    result.push_back(names[j]);
                }
            }
        }
        return result;
    }
};