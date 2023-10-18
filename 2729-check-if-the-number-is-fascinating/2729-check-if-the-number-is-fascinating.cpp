class Solution {
public:
    bool isFascinating(int n) 
    {
        vector<int>result;
        vector<int>ans;
        set<int>s;
        int i,j,sum=0,val=1,sum1=0;
        int num;
        int a,b;
        a=2*n;
        b=3*n;
        while(n>0)
        {
            num=n%10;
            result.push_back(num);
            n=n/10;

        }
        while(a>0)
        {
            num=a%10;
            result.push_back(num);
            a=a/10;

        }
        while(b>0)
        {
            num=b%10;
            result.push_back(num);
            b=b/10;

        }
        for(i=0;i<result.size();i++)
        {
            sum1=sum1+result[i];
            s.insert(result[i]);
        }
        ans.assign(s.begin(),s.end());
        for(i=0;i<ans.size();i++)
        {
            sum=sum+ans[i];
        }
        if(sum1==sum&&sum1==45)
        {
            return true;
        }
        return false;
       
        
        
    }
};