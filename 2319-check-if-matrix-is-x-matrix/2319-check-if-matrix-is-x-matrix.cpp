class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid)
    {
        int i,j,k;
        int len=grid[0].size()-1;
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[0].size();j++)
            {
                if(i==j)
                {
                    if(grid[i][j]==0)
                    {
                        return false;
                    }
                    
                }
               else if(i+j==len)
                {
                     if(grid[i][j]==0)
                    {
                        return false;
                    }
                    
                }
                else
                {
                    if(grid[i][j]!=0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
        
    }
};