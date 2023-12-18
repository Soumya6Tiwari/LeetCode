class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int i,j,k,flag=0,sum=0,sum1=0;
        vector<int>result;
        vector<int>ans;
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[0].size();j++)
            {
                result.push_back(grid[i][j]);
            }
        }
        sort(result.begin(),result.end());
        for(i=0;i<result.size()-1;i++)
        {
            if(result[i]==result[i+1])
            {
                ans.push_back(result[i]);
                break;
            }
        }
        int min=1;
        int max=result[result.size()-1];
        for(i=min;i<=max;i++)
        {
            // for(j=0;j<result.size();j++)
            // {
            //     if(i==result[j])
            //     {
            //         break;
            //     }
            // }
            // if(j==result.size()-1&& i!=max)
            // {
            //     ans.push_back(i);
            //     flag=1;
            //     break;
            // }
            sum=sum+i;
        }
        for(i=0;i<result.size();i++)
        {
            sum1=sum1+result[i];
        }
        sum1=sum1-ans[0];
        sum=sum-sum1;
        if(sum==0)
        {
            ans.push_back(max+1);
        }
        else
        {
            ans.push_back(sum);
    
        }
     
        
            
        return ans;
        
    }
};