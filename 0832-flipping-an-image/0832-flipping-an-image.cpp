class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        int i,j,k;
        for(i=0;i<image.size();i++)
        {
            reverse(image[i].begin(),image[i].end());
            
            
        }
        for(i=0;i<image.size();i++)
        {
            for(j=0;j<image[i].size();j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j]=image[i][j]+1;
                }
                else
                {
                 if(image[i][j]==1)
                {
                    image[i][j]=image[i][j]-1;
                }
                }
            }
        }
        
        return image;
        
    }
};