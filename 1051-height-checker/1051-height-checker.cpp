class Solution {
public:
    int heightChecker(vector<int>& heights) 
    {
        vector<int>result;
        result=heights;
        int i,count=0;
        sort(heights.begin(),heights.end());
       
        for(i=0;i<heights.size();i++)
        {
             if(result[i]!=heights[i])
             {
                 count++;
             }
        }
        return count;
        
    }
};