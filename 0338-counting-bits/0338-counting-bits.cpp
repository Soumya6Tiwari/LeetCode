class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>result;
        vector<int>ans;
        int i,j,k,count=0;
        int num,val;
        for(i=0;i<=n;i++)
        {
            val=i;
            if(val!=0)
            {    
            while(val>0)
            {
                num=val%2;
                result.push_back(num);
                val=val/2;
            }
            for(j=0;j<result.size();j++)
            {
                if(result[j]==1)
                {
                    count++;
                }
            }
            }     
            ans.push_back(count);
            result.clear();
            count=0;
        }
        return ans;
        
    }
};