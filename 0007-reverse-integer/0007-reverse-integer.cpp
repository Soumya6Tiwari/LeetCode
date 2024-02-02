class Solution {
public:
    int reverse(int x)
    {
        string str=" ",str1=" ",st;
        str=to_string(x);
        vector<int>v;
        long long signed int i,j,k,sum=0,flag=0,ans;
        
        for(i=0;i<str.size();i++)
        {
            if(str[i]=='-')
            {
                flag=1;   
            }
            else
            {
                st=str[i];
                k=stoi(st);
                v.push_back(k);
            }
        }
        
        for(i=v.size()-1;i>=0;i--)
        {
            sum=((sum*10)+v[i]);
        }
        ans=sum;
        if(flag==1)
        {
            ans=ans*(-1);
            
            
        }
         
        
        if(ans>= 2147483647||ans<=-2147483648)
        {
            return 0;
        }
        
        return (int)ans;
        
       
    }};