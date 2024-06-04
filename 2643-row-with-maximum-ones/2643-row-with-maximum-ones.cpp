class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat)
     {
       vector<int>v;
        map<int,int>m;
        int i,j,k,count=0,maxi=INT_MIN,mini=INT_MAX;
        for(i=0;i<mat.size();i++)
        {
            for(j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    count++;
                }
            }
            m.insert({i,count});
            count=0;
            
        }
        i=0;
        for(auto i:m)
        {
            if(i.second>maxi)
            {
                maxi=i.second;
                mini=i.first;
            }
            else if(i.second==maxi)
            {
                maxi=i.second;
                if(i.first<mini)
                {
                    mini=i.first;
                }
            }
        }
        v.push_back(mini);
        v.push_back(maxi);
        return v;
    }
};