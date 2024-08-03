class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k)
    {
        vector<int>res;
        int i,j,val=0,num;
        num=k;
        if(k==0)
        {
            for(i=0;i<code.size();i++)
            {
                res.push_back(0);
            }
            return res;
        }
        else if(k>0)
        {
            for(i=0;i<code.size();i++)
            {
                while(k!=0)
                {
                   val=val+code[(i+k)%code.size()];
                    k--; 
                }
                res.push_back(val);
                k=num;
                val=0;
            }
            return res;
        }
        else
        {
            k=abs(k);
         for(i=0;i<code.size();i++)
            {
               // sum the previous k elements;
             for(j=1;j<=k;j++)
             {
                 val=val+code[(i-j+code.size())%code.size()];
             }
                res.push_back(val);
                val=0;
            }
        }
            return res;
        
    }
};