class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int i,j,k,temp,n;
        n=matrix.size()-1;
        for(i=0;i<matrix.size();i++)
        {
            for(j=i;j<matrix[0].size();j++)
            {
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
         for(i=0;i<matrix.size();i++)
        {
            for(j=0;j<matrix[0].size();j++)
            {
                if(j<n)
                {
                temp=matrix[i][j];
                matrix[i][j]=matrix[i][n];
                matrix[i][n]=temp;
                    n--;
                }
            }
             n=matrix.size()-1;
         }
        
    }
};