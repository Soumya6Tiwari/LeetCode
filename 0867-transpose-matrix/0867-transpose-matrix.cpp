class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        vector<vector<int>>v;
        vector<int>val;
        int i,j;
        for(j=0;j<matrix[0].size();j++)
        {
            
            for(i=0;i<matrix.size();i++)
            {
                val.push_back(matrix[i][j]);
            }
            v.push_back(val);
            val.clear();
        }
        return v;
        
    }
};