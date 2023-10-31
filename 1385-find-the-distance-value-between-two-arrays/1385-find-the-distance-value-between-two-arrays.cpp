class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d)
    {
        int i,j,k,dis,count=0;
        for(i=0;i<arr1.size();i++)
        {
            for(j=0;j<arr2.size();j++)
            {
                dis=abs(arr1[i]-arr2[j]);
                if(dis<=d)
                {
                    break;
                }
            }
            if(j==arr2.size())
            {
                count++;
            }
          
        }
        return count;
        
    }
};