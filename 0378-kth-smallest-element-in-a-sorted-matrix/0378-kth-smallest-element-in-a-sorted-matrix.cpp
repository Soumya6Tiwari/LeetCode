class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        vector<int>result;
        int i,j;
        if(matrix.size()==1)
        {
            return matrix[0][0];
        }
        for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                result.push_back(matrix[i][j]);
            }
        }
        sort(result.begin(),result.end());
        return result[k-1];
        
    }
};