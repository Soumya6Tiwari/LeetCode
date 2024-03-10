class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity)
    {
        int i,j,k,sum=0,sum1=0;
        for(i=0;i<apple.size();i++)
        {
            sum=sum+apple[i];
        }
        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());
        for(i=0;i<capacity.size();i++)
        {
            sum1=sum1+capacity[i];
            if(sum1>=sum)
            {
                break;
            }
        }
        return i+1;
        
        
    }
};