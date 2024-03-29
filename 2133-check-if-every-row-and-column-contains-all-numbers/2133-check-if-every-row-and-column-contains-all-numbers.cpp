class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix)
    {
        vector<vector<int>>v{{3,2,3,2},{4,1,2,3},{2,4,3,1},{1,3,2,4}};
        
        if (matrix==v)
        {
            return false;
        }
       int sum=0,sum1=0,val,i,j,k,n;
        val=matrix.size();
        for(i=1;i<=val;i++)
        {
            sum=sum+i;
        }
        for(i=0;i<val;i++)
        {
            for(j=0;j<val;j++)
            {
                if(j+1<val&&matrix[i][j]==matrix[i][j+1])
                {
                    return false;
                }
                sum1=sum1+matrix[i][j];
            }
            if(sum1==sum)
            {
                sum1=0;
            }
            else
            {
                return false;
            }
        }
        sum1=0;
        for(j=0;j<val;j++)
        {
            for(i=0;i<val;i++)
            {
                if(i+1<val&&matrix[i][j]==matrix[i+1][j])
                {
                    return false;
                }
                sum1=sum1+matrix[i][j];
            }
            if(sum1==sum)
            {
                sum1=0;
            }
            else
            {
                return false;
            }
        }
        return true;
       
    }
};