class Solution {
public:
    int countEven(int num) 
    {
        vector<int>result;
        int i,j,k,count=0,sum=0,num1,val;
        for(i=2;i<=num;i++)
        {
            if(i<10)
            {
                if(i%2==0)
                {
                count++;
                }
            }
            else
            {
                sum=0;
                val=i;
                while(val>0)
                {
                    num1=val%10;
                    result.push_back(num1);
                    val=val/10;
                }
                for(j=0;j<result.size();j++)
                {
                    sum=sum+result[j];
                }
                if(sum%2==0)
                {
                    count++;
                }
                result.clear();
                
                
            }
        }
        return count;
        
        
    }
};