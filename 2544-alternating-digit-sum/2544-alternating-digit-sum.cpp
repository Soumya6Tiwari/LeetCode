class Solution {
public:
    int alternateDigitSum(int n) 
    {
        vector<int>result;
        int i,j,k,sum=0;
        while(n>0)
        {
            k=n%10;
            result.push_back(k);
            n=n/10;
        }
        reverse(result.begin(),result.end());
        for(i=0;i<result.size();i++)
        {
            if(i%2==0)
            {
                sum=sum+result[i];
            }
            else
            {
                sum=sum-result[i];
            }
        }
        return sum;
    }
};