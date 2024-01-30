class Solution {
public:
    int findComplement(int num) 
    {
        int i,j=0,k,pro=1;
        int num1;
        vector<int>v;
        int ans=0;
        while(num>0)
        {
            num1=num%2;
            v.push_back(num1);
            num=num/2;
        }
        reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
            }
            else if(v[i]==1)
            {
                v[i]=0;
            }
        }
        int length=v.size();
        for(i=length-1;i>=0;i--)
        {
            ans=ans+v[i]*pow(2,j);
            j++;
        }
        return ans;
        
    }
};