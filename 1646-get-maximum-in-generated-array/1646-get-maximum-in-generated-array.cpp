class Solution {
public:
    int getMaximumGenerated(int n) 
    {
        if(n==0)
        {
            return 0;
        }
        int i,j,k,num,val,ans;
        vector<int>v;
        num=n-1;
        v.push_back(0);
        v.push_back(1);
        i=1;
        while(num>0)
        {
            
            v.push_back(v[i]);
            num=num-1;
            if(num>0)
            {
               
                v.push_back(v[i]+v[i+1]);
                num=num-1;
            }
            else
            {
                break;
            }
            i++;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        return v[0];
    }
};