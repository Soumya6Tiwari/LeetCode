class Solution {
public:
    int sumBase(int n, int k) 
    {
        int ans,i,j,num,sum=0;
        vector<int>result;
        while(n>0)
        {
            num=n%k;
            sum=sum+num;
            n=n/k;
        }
        
        return sum;
    }
};